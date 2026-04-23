#include "trieur.h"
#include "dialogue.h"
#include <filesystem>
#include <string>
using namespace std;
namespace fs = std::filesystem;

void creerDossiers()
{
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

    if (!fs::exists(rootPath))
        fs::create_directory(rootPath);
    if (!fs::exists(imagePath))
        fs::create_directory(imagePath);
    if (!fs::exists(videoPath))
        fs::create_directory(videoPath);
    if (!fs::exists(musiquePath))
        fs::create_directory(musiquePath);
    if (!fs::exists(pdfPath))
        fs::create_directory(pdfPath);
    if (!fs::exists(textPath))
        fs::create_directory(textPath);
    if (!fs::exists(microsoftPath))
        fs::create_directory(microsoftPath);
    if (!fs::exists(wordPath))
        fs::create_directory(wordPath);
    if (!fs::exists(excelPath))
        fs::create_directory(excelPath);
    if (!fs::exists(powerPointPath))
        fs::create_directory(powerPointPath);
    if (!fs::exists(microsoft_autrePath))
        fs::create_directory(microsoft_autrePath);
    if (!fs::exists(dossiersPath))
        fs::create_directory(dossiersPath);
    if (!fs::exists(archivesPath))
        fs::create_directory(archivesPath);
    if (!fs::exists(archivesZipPath))
        fs::create_directory(archivesZipPath);
    if (!fs::exists(archivesRarPath))
        fs::create_directory(archivesRarPath);
    if (!fs::exists(archivesAutresPath))
        fs::create_directory(archivesAutresPath);
    if (!fs::exists(codePath))
        fs::create_directory(codePath);
    if (!fs::exists(codePythonPath))
        fs::create_directory(codePythonPath);
    if (!fs::exists(codeCppPath))
        fs::create_directory(codeCppPath);
    if (!fs::exists(codeCPath))
        fs::create_directory(codeCPath);
    if (!fs::exists(codeCSharpPath))
        fs::create_directory(codeCSharpPath);
    if (!fs::exists(codeAutrePath))
        fs::create_directory(codeAutrePath);
    if (!fs::exists(autrePath))
        fs::create_directory(autrePath);
    if (!fs::exists(executablesPath))
        fs::create_directory(executablesPath);
    if (!fs::exists(executablesWindowsPath))
        fs::create_directory(executablesWindowsPath);
    if (!fs::exists(executablesMacOSPath))
        fs::create_directory(executablesMacOSPath);
    if (!fs::exists(executablesLinuxPath))
        fs::create_directory(executablesLinuxPath);
    if (!fs::exists(executablesAutrePath))
        fs::create_directory(executablesAutrePath);
}