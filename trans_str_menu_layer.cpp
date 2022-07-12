/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_menu_layer.h"

///////////////////////////////////////////////////////////////////////////
// - レイヤーメニューで使用される文字列
// - A string used in the layer menu.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrMenuLayer( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("レイヤー(&L)"); // Layer
    if (idx == 1) return QObject::tr("追加(&A)"); // Add
    if (idx == 2) return QObject::tr("複製(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("下に統合(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("削除(&D)"); // Delete
    if (idx == 5) return QObject::tr("塗りつぶし(&F)"); // Fill
    if (idx == 6) return QObject::tr("クリア(&E)"); // Clear
    if (idx == 7) return QObject::tr("回転(&R)"); // Rotate
    if (idx == 8) return QObject::tr("上下反転(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("左右反転(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("レベル補正(&L)..."); // Levels
    if (idx == 11) return QObject::tr("色相(&H)..."); // Hue
    if (idx == 12) return QObject::tr("ガウスぼかし(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("モザイク(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("回転角度を指定(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("追加 / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("追加 / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("変換(&T)"); // Convert
    if (idx == 18) return QObject::tr("カラーレイヤーに変換(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("&8 bit レイヤーに変換"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("追加 / フォルダ"); // Add Folder
    if (idx == 21) return QObject::tr("フォルダ内を統合(&O)"); // Merge Folder
    if (idx == 22) return QObject::tr("線画抽出(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("&1 bit レイヤーに変換"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("素材");
    if (idx == 25) return QObject::tr("コマ素材の追加...");
    if (idx == 26) return QObject::tr("素材のラスタライズ");
    if (idx == 27) return QObject::tr("プロパティ...");
    if (idx == 28) return QObject::tr("コマの分割...");
    if (idx == 29) return QObject::tr("0 度");
    if (idx == 30) return QObject::tr("全てのレイヤーを統合..."); // Merge All
    if (idx == 31) return QObject::tr("プロパティ");
    if (idx == 32) return QObject::tr("フィルタ(&R)");
    if (idx == 33) return QObject::tr("雲模様");
    if (idx == 34) return QObject::tr("砂模様");
    if (idx == 35) return QObject::tr("バイラテラル...");
    if (idx == 36) return QObject::tr("不透明度ローカット...");
    if (idx == 37) return QObject::tr("不透明度均一化...");
    if (idx == 38) return QObject::tr("ポスタリゼーション...");
    if (idx == 39) return QObject::tr("透過色に変更");
    if (idx == 40) return QObject::tr("非透過色に変更");
    if (idx == 41) return QObject::tr("色反転");
    if (idx == 42) return QObject::tr("不透明度階調化...");
    if (idx == 43) return QObject::tr("追加 / ハーフトーン...");
    if (idx == 44) return QObject::tr("トーンカーブ(&T)...");
    if (idx == 45) return QObject::tr("カラーバランス(&C)...");
    if (idx == 46) return QObject::tr("チャンネル操作(&O)...");
    if (idx == 47) return QObject::tr("追加 / マスク (8 bit)");
    if (idx == 48) return QObject::tr("追加 / ステンシル (8 bit)");
    if (idx == 49) return QObject::tr("色収差/RGBずらし(&A)...");
    if (idx == 50) return QObject::tr("マスクレイヤー(&M)");
    if (idx == 51) return QObject::tr("ステンシルレイヤー(&S)");
    if (idx == 52) return QObject::tr("移動ぼかし(&M)..."); // Motion Blur
    if (idx == 53) return QObject::tr("フォルダにまとめる(&I)"); // Combine In Folder
    if (idx == 55) return QObject::tr("集中線...");
    if (idx == 56) return QObject::tr("流線...");
    if (idx == 57) return QObject::tr("ウニフラッシュ...");
    if (idx == 58) return QObject::tr("アンシャープマスク...");
    if (idx == 59) return QObject::tr("レンズぼかし...");
    if (idx == 60) return QObject::tr("和柄...");
    if (idx == 61) return QObject::tr("グラデーションマップ...");
    if (idx == 62) return QObject::tr("移動");
    if (idx == 63) return QObject::tr("左上に配置");
    if (idx == 64) return QObject::tr("上中央に配置");
    if (idx == 65) return QObject::tr("右上に配置");
    if (idx == 66) return QObject::tr("左中央に配置");
    if (idx == 67) return QObject::tr("中央に配置");
    if (idx == 68) return QObject::tr("右中央に配置");
    if (idx == 69) return QObject::tr("左下に配置");
    if (idx == 70) return QObject::tr("下中央に配置");
    if (idx == 71) return QObject::tr("右下に配置");
    if (idx == 72) return QObject::tr("貫通クリア"); // Clear Through
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("图层(&L)"); // Layer
    if (idx == 1) return QObject::tr("追加(&A)"); // Add
    if (idx == 2) return QObject::tr("复制(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("向下合并(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("删除(&D)"); // Delete
    if (idx == 5) return QObject::tr("全面填充(&F)"); // Fill
    if (idx == 6) return QObject::tr("清除(&E)"); // Clear
    if (idx == 7) return QObject::tr("旋转(&R)"); // Rotate
    if (idx == 8) return QObject::tr("垂直翻转(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("水平翻转(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("色阶(&L)..."); // Levels
    if (idx == 11) return QObject::tr("色相(&H)..."); // Hue
    if (idx == 12) return QObject::tr("高斯模糊(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("马赛克(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("指定旋转角度(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("追加 / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("追加 / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("转换(&T)"); // Convert
    if (idx == 18) return QObject::tr("转换为彩色图层(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("转换为&8 bit 图层"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("添加 / 文件夹"); // Add Folder
    if (idx == 21) return QObject::tr("合并文件夹内图层(&O)"); // Merge Folder
    if (idx == 22) return QObject::tr("提取线稿(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("转换为&1bit图层"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("素材");
    if (idx == 25) return QObject::tr("添加漫画框材料...");
    if (idx == 26) return QObject::tr("素材点阵化");
    if (idx == 27) return QObject::tr("属性...");
    if (idx == 28) return QObject::tr("框格分割...");
    if (idx == 29) return QObject::tr("0 度");
    if (idx == 30) return QObject::tr("合并全部图层..."); // Merge All
    if (idx == 31) return QObject::tr("属性");
    if (idx == 32) return QObject::tr("滤镜(&R)");
    if (idx == 33) return QObject::tr("云朵图案");
    if (idx == 34) return QObject::tr("沙粒图案");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("圖層(&L)"); // Layer
    if (idx == 1) return QObject::tr("追加(&A)"); // Add
    if (idx == 2) return QObject::tr("複製(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("向下合併(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("刪除(&D)"); // Delete
    if (idx == 5) return QObject::tr("整面填充(&F)"); // Fill
    if (idx == 6) return QObject::tr("清除(&E)"); // Clear
    if (idx == 7) return QObject::tr("旋轉(&R)"); // Rotate
    if (idx == 8) return QObject::tr("垂直翻轉(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("水平翻轉(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("色階(&L)..."); // Levels
    if (idx == 11) return QObject::tr("色相(&H)..."); // Hue
    if (idx == 12) return QObject::tr("高斯模糊(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("馬賽克(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("指定旋轉角度(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("追加 / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("追加 / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("轉換(&T)"); // Convert
    if (idx == 18) return QObject::tr("轉換為彩色圖層(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("轉換為8位元圖層"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("新增資料夾"); // Add Folder
    if (idx == 21) return QObject::tr("資料夾內圖層合併(&O)"); // Merge Folder
    if (idx == 22) return QObject::tr("提取線稿(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("轉換為1位元圖層"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("素材");
    if (idx == 25) return QObject::tr("添加漫畫框格素材...");
    if (idx == 26) return QObject::tr("素材點陣化");
    if (idx == 27) return QObject::tr("屬性...");
    if (idx == 28) return QObject::tr("框格分割...");
    if (idx == 29) return QObject::tr("0度");
    if (idx == 30) return QObject::tr("合併所有圖層..."); // Merge All
    if (idx == 31) return QObject::tr("屬性");
    if (idx == 32) return QObject::tr("濾鏡(&R)");
    if (idx == 33) return QObject::tr("雲朵圖案");
    if (idx == 34) return QObject::tr("沙粒圖案");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("레이어(&L)"); // Layer
    if (idx == 1) return QObject::tr("추가(&A)"); // Add
    if (idx == 2) return QObject::tr("복제(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("아래로 통합(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("삭제(&D)"); // Delete
    if (idx == 5) return QObject::tr("채우기(&F)"); // Fill
    if (idx == 6) return QObject::tr("클리어(&L)"); // Clear
    if (idx == 7) return QObject::tr("회전(&R)"); // Rotate
    if (idx == 8) return QObject::tr("상하 반전(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("좌우 반전(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("레벨 보정(&L)..."); // Levels
    if (idx == 11) return QObject::tr("색상(&H)..."); // Hue
    if (idx == 12) return QObject::tr("가우시안 블러(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("모자이크(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("회전 각도를 지정(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("추가 / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("추가 / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("변환(&T)"); // Convert
    if (idx == 18) return QObject::tr("컬러 레이어로 변환(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("&8 bit 레이어로 변환"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("추가 / 폴더"); // Add Folder
    if (idx == 21) return QObject::tr("폴더 내를 통합(&O)"); // Merge Folder
    if (idx == 22) return QObject::tr("선화 추출(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("&1 bit 레이어로 변환"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("소재");
    if (idx == 25) return QObject::tr("만화 칸 소재의 추가...");
    if (idx == 26) return QObject::tr("소재의 래스터라이즈");
    if (idx == 27) return QObject::tr("프로퍼티...");
    if (idx == 28) return QObject::tr("칸의 분할...");
    if (idx == 29) return QObject::tr("0 도");
    if (idx == 30) return QObject::tr("모든 레이어를 통합..."); // Merge All
    if (idx == 31) return QObject::tr("프로퍼티");
    if (idx == 32) return QObject::tr("필터(&R)");
    if (idx == 33) return QObject::tr("구름무늬");
    if (idx == 34) return QObject::tr("모래무늬");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Camada(&L)"); // Layer
    if (idx == 1) return QObject::tr("Adicionar(&A)"); // Add
    if (idx == 2) return QObject::tr("Duplicar(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("Mesclar(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("Excluir(&D)"); // Delete
    if (idx == 5) return QObject::tr("Preencher(&F)"); // Fill
    if (idx == 6) return QObject::tr("Limpar(&E)"); // Clear
    if (idx == 7) return QObject::tr("Girar(&R)"); // Rotate
    if (idx == 8) return QObject::tr("Inverter Verticalmente(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("Inverter Horizontalmente(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Níveis(&L)..."); // Levels
    if (idx == 11) return QObject::tr("Matiz(&H)..."); // Hue
    if (idx == 12) return QObject::tr("Desfoque Gaussiano(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("Mosaico(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("Designar Grau de Rotação(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("Adicionar / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("Adicionar / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("Coverter(&T)"); // Convert
    if (idx == 18) return QObject::tr("Converter para camada de cor(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("Converter para camada de 8 bits"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("Adicionar pasta"); // Add Folder
    if (idx == 21) return QObject::tr("Mesclar pasta"); // Merge Folder
    if (idx == 22) return QObject::tr("Extraindo linhas(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("Converter para camada de 1 bit"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("Material");
    if (idx == 25) return QObject::tr("Adicionar material de painel...");
    if (idx == 26) return QObject::tr("rasterizar material");
    if (idx == 27) return QObject::tr("Propriedade...");
    if (idx == 28) return QObject::tr("Dividir...");
    if (idx == 29) return QObject::tr("0 graus");
    if (idx == 30) return QObject::tr("Mesclar tudo"); // Merge All
    if (idx == 31) return QObject::tr("Propriedade");
    if (idx == 32) return QObject::tr("Filtro(&R)");
    if (idx == 33) return QObject::tr("Nuvem");
    if (idx == 34) return QObject::tr("Areia");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Capa(&L)"); // Layer
    if (idx == 1) return QObject::tr("Agregar(&A)"); // Add
    if (idx == 2) return QObject::tr("Duplicar(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("Combinar hacia abajo(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("Borrar(&D)"); // Delete
    if (idx == 5) return QObject::tr("Rellenar(&F)"); // Fill
    if (idx == 6) return QObject::tr("Quitar(&E)"); // Clear
    if (idx == 7) return QObject::tr("Girar(&R)"); // Rotate
    if (idx == 8) return QObject::tr("Voltear verticalmente(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("Voltear horizontalmente(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Niveles(&L)..."); // Levels
    if (idx == 11) return QObject::tr("Matiz(&H)..."); // Hue
    if (idx == 12) return QObject::tr("Desenfoque gausiano(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("Mosaico(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("Indicar ángulo de rotación(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("Agregar / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("Agregar / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("Convertir(&T)"); // Convert
    if (idx == 18) return QObject::tr("Convertir a capa de color(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("Convertir a capa de 8 bits"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("Añadir carpeta"); // Add Folder
    if (idx == 21) return QObject::tr("Combinar carpeta"); // Merge Folder
    if (idx == 22) return QObject::tr("Extrayendo líneas(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("Convertir a capa de 1 bit"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("Material");
    if (idx == 25) return QObject::tr("Añadir material de panel...");
    if (idx == 26) return QObject::tr("Rasterizar material");
    if (idx == 27) return QObject::tr("Propiedades...");
    if (idx == 28) return QObject::tr("Dividir...");
    if (idx == 29) return QObject::tr("0 grados");
    if (idx == 30) return QObject::tr("Combinar todas..."); // Merge All
    if (idx == 31) return QObject::tr("Propiedades");
    //if (idx == 32) return QObject::tr("Unir visibles");
    if (idx == 32) return QObject::tr("Filtro(&R)");
    if (idx == 33) return QObject::tr("Nube");
    if (idx == 34) return QObject::tr("Arena");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Ebene(&L)"); // Layer
    if (idx == 1) return QObject::tr("Hinzufügen(&A)"); // Add
    if (idx == 2) return QObject::tr("Duplizieren(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("Nach unten zusammenführen(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("Löschen(&D)"); // Delete
    if (idx == 5) return QObject::tr("Füllen(&F)"); // Fill
    if (idx == 6) return QObject::tr("Löschen(&E)"); // Clear
    if (idx == 7) return QObject::tr("Drehen(&R)"); // Rotate
    if (idx == 8) return QObject::tr("Vertikal umdrehen(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("Umdrehen(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Ebenen(&L)..."); // Levels
    if (idx == 11) return QObject::tr("Farbton(&H)..."); // Hue
    if (idx == 12) return QObject::tr("Gaußscher Weichzeichner(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("Mosaik(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("Drehgrad bestimmen(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("Hinzufügen / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("Hinzufügen / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("Umwandeln(&T)"); // Convert
    if (idx == 18) return QObject::tr("Umwandeln zu Farbebene(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("Umwandeln zu 8-Bit-Ebene"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("Ordner hinzufügen"); // Add Folder
    if (idx == 21) return QObject::tr("Ordner zusammenfügen"); // Merge Folder
    if (idx == 22) return QObject::tr("Umrisse extrahieren(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("Umwandeln zu 1-Bit-Ebene"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("Material");
    if (idx == 25) return QObject::tr("Panelmaterial hinzufügen...");
    if (idx == 26) return QObject::tr("Material rastern");
    if (idx == 27) return QObject::tr("Eigenschaften...");
    if (idx == 28) return QObject::tr("Teilen...");
    if (idx == 29) return QObject::tr("0 Grad");
    if (idx == 30) return QObject::tr("Alle zusammenfügen..."); // Merge All
    if (idx == 31) return QObject::tr("Eigenschaften");
    if (idx == 32) return QObject::tr("Filter(&R)");
    if (idx == 33) return QObject::tr("Cloud");
    if (idx == 34) return QObject::tr("Sand");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Calque(&L)"); // Layer
    if (idx == 1) return QObject::tr("Ajouter(&A)"); // Add
    if (idx == 2) return QObject::tr("Dupliquer(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("Fusionner(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("Supprimer(&D)"); // Delete
    if (idx == 5) return QObject::tr("Remplir(&F)"); // Fill
    if (idx == 6) return QObject::tr("Effacer(&E)"); // Clear
    if (idx == 7) return QObject::tr("Faire pivoter(&R)"); // Rotate
    if (idx == 8) return QObject::tr("Faire basculer l’image verticalement(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("Faire basculer l’image horizontalement(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Niveaux(&L)..."); // Levels
    if (idx == 11) return QObject::tr("Teinte(&H)..."); // Hue
    if (idx == 12) return QObject::tr("Flou gaussien(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("Mosaïque(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("Spécifier un degré de rotation(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("Ajouter / &8 bit"); // Add 8bit
    if (idx == 16) return QObject::tr("Ajouter / &1 bit"); // Add 1bit
    if (idx == 17) return QObject::tr("Convertir(&T)"); // Convert
    if (idx == 18) return QObject::tr("Convertir en calque de couleurs(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("Convertir en calque 8 bit"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("Ajouter un dossier"); // Add Folder
    if (idx == 21) return QObject::tr("Fusionner un dossier"); // Merge Folder
    if (idx == 22) return QObject::tr("Extraction de lignes(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("Convertir en calque 1 bit"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("Matériaux");
    if (idx == 25) return QObject::tr("Ajout de panneau de matériaux...");
    if (idx == 26) return QObject::tr("Pixelliser les matériaux");
    if (idx == 27) return QObject::tr("Propriétés...");
    if (idx == 28) return QObject::tr("Division...");
    if (idx == 29) return QObject::tr("0 degré");
    if (idx == 30) return QObject::tr("Fusionner tous..."); // Merge All
    if (idx == 31) return QObject::tr("Propriétés");
    if (idx == 32) return QObject::tr("Filtre(&R)");
    if (idx == 33) return QObject::tr("Cloud");
    if (idx == 34) return QObject::tr("Sable");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Слои(&L)"); // Layer
    if (idx == 1) return QObject::tr("Добавить(&A)"); // Add
    if (idx == 2) return QObject::tr("Дублировать(&C)"); // Duplicate
    if (idx == 3) return QObject::tr("Объединить слои(&M)"); // Merge Down
    if (idx == 4) return QObject::tr("Удалить(&D)"); // Delete
    if (idx == 5) return QObject::tr("Залить(&F)"); // Fill
    if (idx == 6) return QObject::tr("Очистить(&E)"); // Clear
    if (idx == 7) return QObject::tr("Повернуть(&R)"); // Rotate
    if (idx == 8) return QObject::tr("Отразить по вертикали(&V)"); // Flip Vertically
    if (idx == 9) return QObject::tr("Отразить по горизонтали(&H)"); // Flip Horizontally
    if (idx == 10) return QObject::tr("Уровни(&L)..."); // Levels
    if (idx == 11) return QObject::tr("Тон(&H)..."); // Hue
    if (idx == 12) return QObject::tr("Размытие по Гауссу(&G)..."); // Gaussian Blur
    if (idx == 13) return QObject::tr("Мозаика(&S)..."); // Mosaic
    if (idx == 14) return QObject::tr("Указать градус поворота(&D)..."); // Designate Rotate Degree
    if (idx == 15) return QObject::tr("Добавить / &8 бит"); // Add 8bit
    if (idx == 16) return QObject::tr("Добавить / &1 бит"); // Add 1bit
    if (idx == 17) return QObject::tr("Преобразовать(&T)"); // Convert
    if (idx == 18) return QObject::tr("Преобразовать в цветной слой(&C)"); // Convert to Color Layer
    if (idx == 19) return QObject::tr("Преобразовать в 8-битный слой"); // Convert to 8 bit Layer
    if (idx == 20) return QObject::tr("Добавить папку"); // Add Folder
    if (idx == 21) return QObject::tr("Объединить папку"); // Merge Folder
    if (idx == 22) return QObject::tr("Извлечение цвета(&X)..."); // Extracting Lines
    if (idx == 23) return QObject::tr("Преобразовать в 1-битный слой"); // Convert to 1 bit Layer
    if (idx == 24) return QObject::tr("Материал");
    if (idx == 25) return QObject::tr("Добавить Панель Материала...");
    if (idx == 26) return QObject::tr("Растрировать Материал");
    if (idx == 27) return QObject::tr("Свойства...");
    if (idx == 28) return QObject::tr("Разделить...");
    if (idx == 29) return QObject::tr("0 градусов");
    if (idx == 30) return QObject::tr("Объединить все..."); // Merge All
    if (idx == 30) return QObject::tr("Объединить все..."); // Merge All
    if (idx == 31) return QObject::tr("Свойства");
    if (idx == 32) return QObject::tr("Фильтр(&R)");
    if (idx == 33) return QObject::tr("Облако");
    if (idx == 34) return QObject::tr("Песок");
    if (idx == 35) return QObject::tr("Двустороннее размытие");
    if (idx == 36) return QObject::tr("Opacity Low Cut");
    if (idx == 37) return QObject::tr("Opacity Uniformity");
    if (idx == 38) return QObject::tr("Постеризация");
    if (idx == 39) return QObject::tr("Change Transparent Color ");
    if (idx == 40) return QObject::tr("Change Nontransparent Color");
    if (idx == 41) return QObject::tr("Resverse Color");
    if (idx == 42) return QObject::tr("Прозрачный градиент...");
    if (idx == 43) return QObject::tr("Доб. / Полутон...");
    if (idx == 44) return QObject::tr("Кривая тона...");
    if (idx == 45) return QObject::tr("Баланс цвета...");
    if (idx == 46) return QObject::tr("Операции с каналами...");
    if (idx == 47) return QObject::tr("Доб. / маску (8 бит)");
    if (idx == 48) return QObject::tr("Доб. / трафарет (8 бит)");
    if (idx == 49) return QObject::tr("Хроматическая аберрация...");
    if (idx == 50) return QObject::tr("&Слой маска");
    if (idx == 51) return QObject::tr("&Слой трафарет");
    if (idx == 52) return QObject::tr("Размытие в движении (&M)...");
    if (idx == 53) return QObject::tr("Создать группу");
    if (idx == 55) return QObject::tr("Линии (Концентрация)...");
    if (idx == 56) return QObject::tr("Линии (Параллель)...");
    if (idx == 57) return QObject::tr("Линии (Морской всплеск)...");
    if (idx == 58) return QObject::tr("Контурная резкость...");
    if (idx == 59) return QObject::tr("Размытие линзой...");
    if (idx == 60) return QObject::tr("Японский паттерн...");
    if (idx == 61) return QObject::tr("Карта градиента...");
    if (idx == 62) return QObject::tr("Подвинуть");
    if (idx == 63) return QObject::tr("Вверх влево");
    if (idx == 64) return QObject::tr("Вверх по центру");
    if (idx == 65) return QObject::tr("Вверх вправо");
    if (idx == 66) return QObject::tr("Слева по центру");
    if (idx == 67) return QObject::tr("По центру");
    if (idx == 68) return QObject::tr("Справа по центру");
    if (idx == 69) return QObject::tr("Вниз влево");
    if (idx == 70) return QObject::tr("Вниз по центру");
    if (idx == 71) return QObject::tr("Вниз вправо");
    if (idx == 72) return QObject::tr("Clear Through");
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  if (man->TranslatePolish())
  {
  }

  if (idx == 0) return QObject::tr("Layer(&L)");
  if (idx == 1) return QObject::tr("Add(&A)");
  if (idx == 2) return QObject::tr("Duplicate(&C)");
  if (idx == 3) return QObject::tr("Merge Down(&M)");
  if (idx == 4) return QObject::tr("Delete(&D)");
  if (idx == 5) return QObject::tr("Fill(&F)");
  if (idx == 6) return QObject::tr("Clear(&E)");
  if (idx == 7) return QObject::tr("Rotate(&R)");
  if (idx == 8) return QObject::tr("Flip Vertically(&V)");
  if (idx == 9) return QObject::tr("Flip Horizontally(&H)");
  if (idx == 10) return QObject::tr("Levels(&L)...");
  if (idx == 11) return QObject::tr("Hue(&H)...");
  if (idx == 12) return QObject::tr("Gaussian Blur(&G)...");
  if (idx == 13) return QObject::tr("Mosaic(&S)...");
  if (idx == 14) return QObject::tr("Designate Rotate Degree(&D)...");
  if (idx == 15) return QObject::tr("Add / 8 bit");
  if (idx == 16) return QObject::tr("Add / 1 bit");
  if (idx == 17) return QObject::tr("Convert(&T)");
  if (idx == 18) return QObject::tr("Convert to Color Layer(&C)");
  if (idx == 19) return QObject::tr("Convert to &8 bit Layer");
  if (idx == 20) return QObject::tr("Add Folder");
  if (idx == 21) return QObject::tr("Merge Folder(&O)");
  if (idx == 22) return QObject::tr("Extracting Lines(&X)...");
  if (idx == 23) return QObject::tr("Convert to &1 bit Layer");
  if (idx == 24) return QObject::tr("Material");
  if (idx == 25) return QObject::tr("Add Panel Material...");
  if (idx == 26) return QObject::tr("Rasterize Material");
  if (idx == 27) return QObject::tr("Property...");
  if (idx == 28) return QObject::tr("Divide...");
  if (idx == 29) return QObject::tr("0 degree");
  if (idx == 30) return QObject::tr("Merge All...");
  if (idx == 31) return QObject::tr("Property");
  if (idx == 32) return QObject::tr("Filter(&R)");
  if (idx == 33) return QObject::tr("Cloud");
  if (idx == 34) return QObject::tr("Sand");
  if (idx == 35) return QObject::tr("Bilateral Blur");
  if (idx == 36) return QObject::tr("Opacity Low Cut");
  if (idx == 37) return QObject::tr("Opacity Uniformity");
  if (idx == 38) return QObject::tr("Posterization");
  if (idx == 39) return QObject::tr("Change Transparent Color ");
  if (idx == 40) return QObject::tr("Change Nontransparent Color");
  if (idx == 41) return QObject::tr("Resverse Color");
  if (idx == 42) return QObject::tr("Transparent Gradient...");
  if (idx == 43) return QObject::tr("Add / Halftone...");
  if (idx == 44) return QObject::tr("Tone Curve...");
  if (idx == 45) return QObject::tr("Color Balance...");
  if (idx == 46) return QObject::tr("Channel Operation...");
  if (idx == 47) return QObject::tr("Add / Mask (8 bit)");
  if (idx == 48) return QObject::tr("Add / Stencil (8 bit)");
  if (idx == 49) return QObject::tr("Chromatic Aberration...");
  if (idx == 50) return QObject::tr("&Mask Layer");
  if (idx == 51) return QObject::tr("&Stencil Layer");
  if (idx == 52) return QObject::tr("Motion Blur (&M)...");
  if (idx == 53) return QObject::tr("Combine In Folder");
  if (idx == 55) return QObject::tr("Line (Concentrated)...");
  if (idx == 56) return QObject::tr("Line (Parallel)...");
  if (idx == 57) return QObject::tr("Line (Sea Urchin Flash)...");
  if (idx == 58) return QObject::tr("Unsharp Mask...");
  if (idx == 59) return QObject::tr("Lens Blur...");
  if (idx == 60) return QObject::tr("Japanese Pattern...");
  if (idx == 61) return QObject::tr("Gradient Map...");
  if (idx == 62) return QObject::tr("Move");
  if (idx == 63) return QObject::tr("Align Top Left");
  if (idx == 64) return QObject::tr("Align Top Center");
  if (idx == 65) return QObject::tr("Align Top Right");
  if (idx == 66) return QObject::tr("Align Left Center");
  if (idx == 67) return QObject::tr("Align Center");
  if (idx == 68) return QObject::tr("Align Right Center");
  if (idx == 69) return QObject::tr("Align Bottom Left");
  if (idx == 70) return QObject::tr("Align Bottom Center");
  if (idx == 71) return QObject::tr("Aling Bottom Right");
  if (idx == 72) return QObject::tr("Clear Through");

  return "";
}
