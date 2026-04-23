#include "trieur.h"
#include "dialogue.h"
#include <filesystem>
#include <iostream>
#include <unordered_map>
#include <list>
#include <string>
namespace fs = std::filesystem;
using namespace std;
list<string> fichiers = {};
list<string> dossiers = {};

//---------------------------------------------------------
    string path = fs::current_path().string();
    string rootPath = path + "/Root";
    string imagePath = path + "/Root/Images";
    string videoPath = path + "/Root/Videos";
    string musiquePath = path + "/Root/Musique";
    string pdfPath = path + "/Root/PDF";
    string textPath = path + "/Root/Texts";
    string microsoftPath = path + "/Root/Microsoft";
    string wordPath = path + "/Root/Microsoft/Word";
    string excelPath = path + "/Root/Microsoft/Excel";
    string powerPointPath = path + "/Root/Microsoft/PowerPoint";
    string microsoft_autrePath = path + "/Root/Microsoft/Autre";
    string dossiersPath = path + "/Root/Dossiers";
    string archivesPath = path + "/Root/Archives";
    string archivesZipPath = path + "/Root/Archives/ZIP";
    string archivesRarPath = path + "/Root/Archives/RAR";
    string archivesAutresPath = path + "/Root/Archives/Autre";
    string codePath = path + "/Root/Code";
    string codePythonPath = path + "/Root/Code/Python";
    string codeCppPath = path + "/Root/Code/C++";
    string codeCPath = path + "/Root/Code/C";
    string codeCSharpPath = path + "/Root/Code/C#";
    string codeAutrePath = path + "/Root/Code/Autre";
    string autrePath = path + "/Root/Autre";
    string executablesPath = path + "/Root/Executables";
    string executablesWindowsPath = path + "/Root/Executables/Windows";
    string executablesMacOSPath = path + "/Root/Executables/MacOS";
    string executablesLinuxPath = path + "/Root/Executables/Linux";
    string executablesAutrePath = path + "/Root/Executables/Autre";

std::unordered_map<std::string, std::string> extensionToPath = {
    // Textes
    {"txt", textPath}, {"log", textPath}, {"csv", textPath}, {"json", textPath},
    {"xml", textPath}, {"md", textPath}, {"yml", textPath}, {"yaml", textPath},
    {"ini", textPath}, {"cfg", textPath}, {"conf", textPath},
    // Images
    {"bmp", imagePath}, {"dib", imagePath}, {"rle", imagePath}, {"jpg", imagePath},
    {"jpeg", imagePath}, {"jpe", imagePath}, {"jfif", imagePath}, {"png", imagePath},
    {"gif", imagePath}, {"tif", imagePath}, {"tiff", imagePath}, {"webp", imagePath},
    {"ico", imagePath}, {"svg", imagePath}, {"heic", imagePath}, {"heif", imagePath}, {"raw", imagePath},

    // Vidéo
    {"mp4", videoPath}, {"mkv", videoPath}, {"avi", videoPath}, {"mov", videoPath},
    {"wmv", videoPath}, {"flv", videoPath}, {"webm", videoPath}, {"mpeg", videoPath},
    {"mpg", videoPath}, {"3gp", videoPath}, {"m4v", videoPath},

    // Musique / Audio
    {"mp3", musiquePath}, {"wav", musiquePath}, {"flac", musiquePath}, {"aac", musiquePath},
    {"ogg", musiquePath}, {"wma", musiquePath}, {"m4a", musiquePath}, {"alac", musiquePath},
    {"aiff", musiquePath}, {"mid", musiquePath}, {"midi", musiquePath},

    // PDF
    {"pdf", pdfPath},

    // Microsoft Word
    {"doc", wordPath}, {"docx", wordPath}, {"dot", wordPath}, {"dotx", wordPath}, {"docm", wordPath}, {"dotm", wordPath}, {"rtf", wordPath},

    // Microsoft Excel
    {"xls", excelPath}, {"xlsx", excelPath}, {"xlsm", excelPath}, {"xlt", excelPath}, {"xltx", excelPath}, {"xltm", excelPath}, {"xlsb", excelPath},

    // Microsoft PowerPoint
    {"ppt", powerPointPath}, {"pptx", powerPointPath}, {"pptm", powerPointPath}, {"pps", powerPointPath}, {"ppsx", powerPointPath}, {"ppsm", powerPointPath},

    // Microsoft autres
    {"mdb", microsoft_autrePath}, {"accdb", microsoft_autrePath}, {"accde", microsoft_autrePath}, {"accdr", microsoft_autrePath},
    {"pst", microsoft_autrePath}, {"ost", microsoft_autrePath}, {"msg", microsoft_autrePath}, {"oft", microsoft_autrePath},
    {"pub", microsoft_autrePath}, {"vsd", microsoft_autrePath}, {"vsdx", microsoft_autrePath}, {"vsdm", microsoft_autrePath},
    {"mpp", microsoft_autrePath}, {"mpt", microsoft_autrePath}, {"one", microsoft_autrePath},

    // Archives
    {"zip", archivesZipPath}, {"rar", archivesRarPath}, {"7z", archivesAutresPath}, {"tar", archivesAutresPath},
    {"gz", archivesAutresPath}, {"bz2", archivesAutresPath}, {"xz", archivesAutresPath}, {"iso", archivesAutresPath},
    {"cab", archivesAutresPath}, {"arj", archivesAutresPath}, {"lz", archivesAutresPath}, {"lzma", archivesAutresPath}, {"tgz", archivesAutresPath}, {"tbz2", archivesAutresPath},

    // Code
    {"py", codePythonPath}, {"c", codeCPath}, {"cpp", codeCppPath}, {"h", codeCppPath}, {"hpp", codeCppPath},
    {"cs", codeCSharpPath}, {"java", codeAutrePath}, {"js", codeAutrePath}, {"ts", codeAutrePath}, {"html", codeAutrePath},
    {"css", codeAutrePath}, {"php", codeAutrePath}, {"rb", codeAutrePath}, {"go", codeAutrePath}, {"rs", codeAutrePath},
    {"kt", codeAutrePath}, {"swift", codeAutrePath},

    // Executables Windows
    {"exe", executablesWindowsPath}, {"com", executablesWindowsPath},
    {"msi", executablesWindowsPath}, {"msp", executablesWindowsPath},
    {"bat", executablesWindowsPath}, {"cmd", executablesWindowsPath},
    {"ps1", executablesWindowsPath}, {"vbs", executablesWindowsPath},
    {"wsf", executablesWindowsPath}, {"scr", executablesWindowsPath},
    {"cpl", executablesWindowsPath}, {"msc", executablesWindowsPath},

    // Executables macOS
    {"app", executablesMacOSPath}, {"command", executablesMacOSPath},
    {"pkg", executablesMacOSPath}, {"dmg", executablesMacOSPath},

    // Executables Linux
    {"bin", executablesLinuxPath}, {"run", executablesLinuxPath},
    {"out", executablesLinuxPath}, {"appimage", executablesLinuxPath},
    {"deb", executablesLinuxPath}, {"rpm", executablesLinuxPath},

    // Executables multiplateforme
    {"jar", executablesAutrePath}, {"sh", executablesAutrePath},
};

//---------------------------------------------------------

void listerFichier()
{
    string path = fs::current_path().string();
    for (const auto& entre : fs::directory_iterator(path))
    {
        if (entre.path().filename() == "prog.exe")
        {
            continue;
        }
        else if (fs::is_directory(entre)&& entre.path().filename() == "Root")
        {
            continue;
        }
        else if (fs::is_directory(entre))
        {
            dossiers.push_back(entre.path().string());
        }
        else 
            fichiers.push_back(entre.path().string());
    }
    for (const string fichier : fichiers)
    {
        cout << fichier << "\n";
    }
    for (const string dossier : dossiers)
    {
        cout << dossier << "\n";
    }
    cout << "il y a " << fichiers.size() << " fichiers et " << dossiers.size() << " dossiers dans ce dossier." << endl;
    return;
}
string getExtension(string filename)
{
    size_t pos = filename.find_last_of(".");
    if (pos == string::npos)
        return "";
    return filename.substr(pos + 1);
}
string trouverPathAdapter(string ext)
{
    auto it = extensionToPath.find(ext);
    std::string targetPath;

    if (it != extensionToPath.end())
        targetPath = it->second;
    else
        targetPath = autrePath; // par défaut
    return targetPath;
}
void trierFichier(int choix1, int choix2)
{
    int nbFichiers = fichiers.size();
    int fichiersTraites = 0;
    for (const string& entre : fichiers)
    {
        string targetPath = trouverPathAdapter(getExtension(entre));
        if (choix1 == 0)
        {
            dernierDialogue();
        }
        else if (choix1 == 1 && choix2 == 1)
        {
            try
            {
                fs::copy(entre, targetPath + "/" + fs::path(entre).filename().string());
            }
            catch (const fs::filesystem_error& e)
            {
                cerr << "Erreur lors de la copie de " << entre << " : " << e.what() << endl;
            }
        }
        else if (choix1 == 1 && choix2 == 2)
        {
            try
            {
                fs::copy(entre, targetPath + "/" + fs::path(entre).filename().string(), fs::copy_options::overwrite_existing);
            }
            catch (const fs::filesystem_error& e)
            {
                cerr << "Erreur lors de la copie de " << entre << " : " << e.what() << endl;
            }
        }
        else if (choix1 == 2)
        {
            try
            {
                fs::rename(entre, targetPath + "/" + fs::path(entre).filename().string());
            }
            catch (const fs::filesystem_error& e)
            {
                cerr << "Erreur lors du déplacement de " << entre << " : " << e.what() << endl;
            }
        }
        fichiersTraites++;
        afficherMessage("Traitement en cours... " + to_string(fichiersTraites) + "/" + to_string(nbFichiers) + " fichiers traités.");
        
    }
    for(const string& dossier : dossiers)
    {
        // Sécurité : on récupère le nom du dossier
        fs::path p(dossier);
        string nomDossier = p.filename().string();

        // Emplacement de destination : Root/Dossiers/NomDuDossier
        fs::path destination = fs::path(dossiersPath) / nomDossier;

        if (choix1 == 0) {
            dernierDialogue();
        }
        else if (choix1 == 1) { // Mode COPIE
            try {
                auto options = fs::copy_options::recursive;
                if (choix2 == 2) options |= fs::copy_options::overwrite_existing;
                
                fs::copy(dossier, destination, options);
            }
            catch (const fs::filesystem_error& e) {
                cerr << "Erreur copie dossier : " << e.what() << endl;
            }
        }
        else if (choix1 == 2) { // Mode DÉPLACEMENT
            try {
                // Sur certains OS, rename échoue si la destination existe
                if (fs::exists(destination) && choix2 == 2) {
                    fs::remove_all(destination); 
                }
                fs::rename(dossier, destination);
            }
            catch (const fs::filesystem_error& e) {
                cerr << "Erreur déplacement dossier : " << e.what() << endl;
            }
        }
    }
    return;
}
