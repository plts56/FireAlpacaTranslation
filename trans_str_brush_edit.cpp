/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_brush_edit.h"

///////////////////////////////////////////////////////////////////////////
// - ブラシ編集ダイアログで使用される文字列
// - The string used in the brush editing dialog.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrBrushEdit( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("名前");
    if (idx == 1) return QObject::tr("タイプ");
    if (idx == 2) return QObject::tr("ペン");
    if (idx == 3) return QObject::tr("エアブラシ");
    if (idx == 4) return QObject::tr("消しゴム");
    if (idx == 5) return QObject::tr("幅");
    if (idx == 6) return QObject::tr("最小幅");
    if (idx == 7) return QObject::tr("筆圧サイズ");
    if (idx == 8) return QObject::tr("筆圧不透明度");
    if (idx == 9) return QObject::tr("ブラシ編集");
    if (idx == 10) return QObject::tr("ぼかし");
    if (idx == 11) return QObject::tr("オプション");
    if (idx == 12) return QObject::tr("ぼかしの強さ");
    if (idx == 13) return QObject::tr("水彩");
    if (idx == 14) return QObject::tr("混ざりやすさ");
    if (idx == 15) return QObject::tr("色補充");
    if (idx == 16) return QObject::tr("ソフトエッジ");
    if (idx == 17) return QObject::tr("ビットマップ");
    if (idx == 18) return QObject::tr("描画間隔");
    if (idx == 19) return QObject::tr("回転");
    if (idx == 20) return QObject::tr("ランダム回転");
    if (idx == 21) return QObject::tr("前景色を適用");
    if (idx == 22) return QObject::tr("散布");
    if (idx == 23) return QObject::tr("散布強さ");
    if (idx == 24) return QObject::tr("粒子サイズ");
    if (idx == 25) return QObject::tr("粒子ランダム");
    if (idx == 26) return QObject::tr("粒子回転");
    if (idx == 27) return QObject::tr("色ジッター");
    if (idx == 28) return QObject::tr("色相ジッター");
    if (idx == 29) return QObject::tr("散布水彩");
    if (idx == 30) return QObject::tr("指先");
    if (idx == 31) return QObject::tr("ブラシスクリプト");
    if (idx == 32) return QObject::tr("強制入り抜き");
    if (idx == 33) return QObject::tr("ふちペン");
    if (idx == 34) return QObject::tr("ふち幅");
    if (idx == 35) return QObject::tr("パターン");
    if (idx == 36) return QObject::tr("ビットマップ水彩");
    if (idx == 37) return QObject::tr("トーン化する");
    if (idx == 38) return QObject::tr("ずらし方向を固定");
    if (idx == 39) return QObject::tr("ずらし方向");
    if (idx == 40) return QObject::tr("沿って回転");
    if (idx == 41) return QObject::tr("回転角");
    if (idx == 42) return QObject::tr("ランダム回転");
    if (idx == 43) return QObject::tr("ローラー (リボン)");
    if (idx == 44) return QObject::tr("一巡だけ描画");
    if (idx == 45) return QObject::tr("繰り返し描画");
    if (idx == 46) return QObject::tr("ランダム描画");
    if (idx == 47) return QObject::tr("色相");
    if (idx == 48) return QObject::tr("色混ぜ");
    if (idx == 49) return QObject::tr("オプション");
    if (idx == 50) return QObject::tr("筆圧補正");
    if (idx == 51) return QObject::tr("オプションはありません");
    if (idx == 52) return QObject::tr("ブレンド");
    if (idx == 53) return QObject::tr("柔らかさ");
    if (idx == 54) return QObject::tr("ランダム回転2");
    if (idx == 55) return QObject::tr("描画単位の回転");
    if (idx == 56) return QObject::tr("ストローク単位の回転");
    if (idx == 57) return QObject::tr("複数素材がある場合に、ランダムに素材を描画します");
    if (idx == 58) return QObject::tr("複数素材がある場合に、最初の素材から繰り返し描画します");
    if (idx == 60) return QObject::tr("テクスチャ");
    if (idx == 61) return QObject::tr("ブラシテクスチャ");
    if (idx == 62) return QObject::tr("テクスチャ合成");
    if (idx == 63) return QObject::tr("テクスチャ影響");
    if (idx == 64) return QObject::tr("乗算");
    if (idx == 65) return QObject::tr("減算");
    if (idx == 66) return QObject::tr("散布色混ぜ");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("名称");
    if (idx == 1) return QObject::tr("类型");
    if (idx == 2) return QObject::tr("笔刷");
    if (idx == 3) return QObject::tr("喷枪");
    if (idx == 4) return QObject::tr("橡皮擦");
    if (idx == 5) return QObject::tr("宽度");
    if (idx == 6) return QObject::tr("最小宽度");
    if (idx == 7) return QObject::tr("笔压尺寸");
    if (idx == 8) return QObject::tr("笔压不透明度");
    if (idx == 9) return QObject::tr("笔刷编辑");
    if (idx == 10) return QObject::tr("模糊");
    if (idx == 11) return QObject::tr("选项");
    if (idx == 12) return QObject::tr("模糊强度");
    if (idx == 13) return QObject::tr("水彩");
    if (idx == 14) return QObject::tr("混合难易度");
    if (idx == 15) return QObject::tr("补色");
    if (idx == 16) return QObject::tr("柔边");
    if (idx == 17) return QObject::tr("点阵笔刷");
    if (idx == 18) return QObject::tr("绘图间隔");
    if (idx == 19) return QObject::tr("旋转");
    if (idx == 20) return QObject::tr("随机旋转");
    if (idx == 21) return QObject::tr("应用前景色");
    if (idx == 22) return QObject::tr("散布");
    if (idx == 23) return QObject::tr("散布强度");
    if (idx == 24) return QObject::tr("粒子尺寸");
    if (idx == 25) return QObject::tr("粒子随机");
    if (idx == 26) return QObject::tr("粒子旋转");
    if (idx == 27) return QObject::tr("色彩抖动");
    if (idx == 28) return QObject::tr("色相抖动");
    if (idx == 29) return QObject::tr("散布水彩");
    if (idx == 30) return QObject::tr("指尖");
    if (idx == 31) return QObject::tr("笔刷脚本");
    if (idx == 32) return QObject::tr("强制淡入淡出");
    if (idx == 33) return QObject::tr("中空笔");
    if (idx == 34) return QObject::tr("中空宽度");
    if (idx == 35) return QObject::tr("图案");
    if (idx == 36) return QObject::tr("点阵水彩");
    //if (idx == 37) return QObject::tr("随机移动");
    if (idx == 38) return QObject::tr("固定位移方向");
    if (idx == 39) return QObject::tr("位移方向");
    if (idx == 40) return QObject::tr("向前旋转");
    if (idx == 41) return QObject::tr("旋转角度");
    if (idx == 42) return QObject::tr("随机旋转");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("名字");
    if (idx == 1) return QObject::tr("類型");
    if (idx == 2) return QObject::tr("畫筆");
    if (idx == 3) return QObject::tr("噴槍");
    if (idx == 4) return QObject::tr("橡皮擦");
    if (idx == 5) return QObject::tr("寬度");
    if (idx == 6) return QObject::tr("最小寬度");
    if (idx == 7) return QObject::tr("筆壓尺寸");
    if (idx == 8) return QObject::tr("筆壓不透明度");
    if (idx == 9) return QObject::tr("筆刷編輯");
    if (idx == 10) return QObject::tr("模糊");
    if (idx == 11) return QObject::tr("選項");
    if (idx == 12) return QObject::tr("模糊強度");
    if (idx == 13) return QObject::tr("水彩");
    if (idx == 14) return QObject::tr("混色難易度");
    if (idx == 15) return QObject::tr("顏色補充");
    if (idx == 16) return QObject::tr("羽化邊緣");
    if (idx == 17) return QObject::tr("貼圖筆刷");
    if (idx == 18) return QObject::tr("繪圖間隔");
    if (idx == 19) return QObject::tr("旋轉");
    if (idx == 20) return QObject::tr("亂數旋轉");
    if (idx == 21) return QObject::tr("使用前景色");
    if (idx == 22) return QObject::tr("散布");
    if (idx == 23) return QObject::tr("散布強度");
    if (idx == 24) return QObject::tr("顆粒尺寸");
    if (idx == 25) return QObject::tr("顆粒亂數");
    if (idx == 26) return QObject::tr("顆粒旋轉");
    if (idx == 27) return QObject::tr("顏色抖動");
    if (idx == 28) return QObject::tr("色相抖動");
    if (idx == 29) return QObject::tr("散布水彩");
    if (idx == 30) return QObject::tr("塗抹");
    if (idx == 31) return QObject::tr("筆刷腳本");
    if (idx == 32) return QObject::tr("強制起筆/收筆");
    if (idx == 33) return QObject::tr("中空筆");
    if (idx == 34) return QObject::tr("邊緣寬度");
    if (idx == 35) return QObject::tr("圖案");
    if (idx == 36) return QObject::tr("點陣水彩");
    //if (idx == 37) return QObject::tr("亂數位移");
    if (idx == 38) return QObject::tr("固定位移方向");
    if (idx == 39) return QObject::tr("位移方向");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("이름");
    if (idx == 1) return QObject::tr("타입");
    if (idx == 2) return QObject::tr("펜");
    if (idx == 3) return QObject::tr("에어브러시");
    if (idx == 4) return QObject::tr("지우개");
    if (idx == 5) return QObject::tr("폭");
    if (idx == 6) return QObject::tr("최소폭");
    if (idx == 7) return QObject::tr("필압 사이즈");
    if (idx == 8) return QObject::tr("필압 불투명도");
    if (idx == 9) return QObject::tr("브러시 편집");
    if (idx == 10) return QObject::tr("블러");
    if (idx == 11) return QObject::tr("옵션");
    if (idx == 12) return QObject::tr("블러 강도");
    if (idx == 13) return QObject::tr("수채화");
    if (idx == 14) return QObject::tr("색상 배합의 용이함");
    if (idx == 15) return QObject::tr("색보충");
    if (idx == 16) return QObject::tr("소프트 에지");
    if (idx == 17) return QObject::tr("비트맵");
    if (idx == 18) return QObject::tr("간격");
    if (idx == 19) return QObject::tr("회전");
    if (idx == 20) return QObject::tr("랜덤 회전");
    if (idx == 21) return QObject::tr("전경색을 적용");
    if (idx == 22) return QObject::tr("뿌리기");
    if (idx == 23) return QObject::tr("뿌리기 강도");
    if (idx == 24) return QObject::tr("입자 크기");
    if (idx == 25) return QObject::tr("랜덤 입자");
    if (idx == 26) return QObject::tr("입자 회전");
    if (idx == 27) return QObject::tr("색 지터");
    if (idx == 28) return QObject::tr("색상 지터");
    if (idx == 29) return QObject::tr("수채 뿌리기");
    if (idx == 30) return QObject::tr("손가락");
    if (idx == 31) return QObject::tr("브러시 스크립트");
    if (idx == 32) return QObject::tr("강제 페이드 인/아웃");
    if (idx == 33) return QObject::tr("테두리 펜");
    if (idx == 34) return QObject::tr("테두리 폭");
    if (idx == 35) return QObject::tr("패턴");
    if (idx == 36) return QObject::tr("비트맵 수채");
    //if (idx == 37) return QObject::tr("랜덤배치");
    if (idx == 38) return QObject::tr("배치방향을 고정");
    if (idx == 39) return QObject::tr("배치방향");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Nome");
    if (idx == 1) return QObject::tr("Tipo");
    if (idx == 2) return QObject::tr("Caneta");
    if (idx == 3) return QObject::tr("Spray");
    if (idx == 4) return QObject::tr("Borracha");
    if (idx == 5) return QObject::tr("Largura");
    if (idx == 6) return QObject::tr("Largura mín.");
    if (idx == 7) return QObject::tr("Tamanho por Pressão");
    if (idx == 8) return QObject::tr("Opacidade por Pressão");
    if (idx == 9) return QObject::tr("Editar Pincel");
    if (idx == 10) return QObject::tr("Borrão");
    if (idx == 11) return QObject::tr("Opções");
    if (idx == 12) return QObject::tr("Intensidade do Borrão");
    if (idx == 13) return QObject::tr("Aquarela");
    if (idx == 14) return QObject::tr("Facilidade em Misturar as Cores");
    if (idx == 15) return QObject::tr("Carregar Cor");
    if (idx == 16) return QObject::tr("Suavização de Bordas");
    if (idx == 17) return QObject::tr("Bitmap");
    if (idx == 18) return QObject::tr("Espaçamento");
    if (idx == 19) return QObject::tr("Rotacionar");
    if (idx == 20) return QObject::tr("Rotação Arbitrária");
    if (idx == 21) return QObject::tr("Aplicar Cor do Primeiro Plano");
    if (idx == 22) return QObject::tr("Espalhador");
    if (idx == 23) return QObject::tr("Força do espalhador");
    if (idx == 24) return QObject::tr("Tamanho de partícula");
    if (idx == 25) return QObject::tr("Partícula aleatória");
    if (idx == 26) return QObject::tr("Rotação de partícula");
    if (idx == 27) return QObject::tr("Cor do Jitter");
    if (idx == 28) return QObject::tr("Matiz do Jitter");
    if (idx == 29) return QObject::tr("Espalhador de aguarela");
    if (idx == 30) return QObject::tr("Borrador");
    if (idx == 31) return QObject::tr("Pincel de script");
    if (idx == 32) return QObject::tr("Forçar fade in/ou");
    if (idx == 33) return QObject::tr("Caneta de Rebordo");
    if (idx == 34) return QObject::tr("Largura do Rebordo");
    if (idx == 35) return QObject::tr("Padrão");
    if (idx == 36) return QObject::tr("Aguarela Mapa de Bits");
    //if (idx == 37) return QObject::tr("Deslocamento Aleatório");
    if (idx == 38) return QObject::tr("Direção deslocamento fixa");
    if (idx == 39) return QObject::tr("Direção deslocamento");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Nombre");
    if (idx == 1) return QObject::tr("Tipo");
    if (idx == 2) return QObject::tr("Pluma");
    if (idx == 3) return QObject::tr("Aerógrafo");
    if (idx == 4) return QObject::tr("Borrador");
    if (idx == 5) return QObject::tr("Ancho");
    if (idx == 6) return QObject::tr("Ancho mín.");
    if (idx == 7) return QObject::tr("Tamaño por presión");
    if (idx == 8) return QObject::tr("Opacidad por presión");
    if (idx == 9) return QObject::tr("Editar pincel");
    if (idx == 10) return QObject::tr("Difuminar");
    if (idx == 11) return QObject::tr("Opciones");
    if (idx == 12) return QObject::tr("Intensidad de Difuminado");
    if (idx == 13) return QObject::tr("Acuarela");
    if (idx == 14) return QObject::tr("Facilidad para Mezclar Colores");
    if (idx == 15) return QObject::tr("Cargar Color");
    if (idx == 16) return QObject::tr("Bordes Suaves");
    if (idx == 17) return QObject::tr("Mapa de Bits");
    if (idx == 18) return QObject::tr("Espacio");
    if (idx == 19) return QObject::tr("Rotación");
    if (idx == 20) return QObject::tr("Rotación aleatoria");
    if (idx == 21) return QObject::tr("Aplicar Color de Fondo");
    if (idx == 22) return QObject::tr("Dispersar");
    if (idx == 23) return QObject::tr("Fuerza de dispersión");
    if (idx == 24) return QObject::tr("Ajustar tamaño de partícula");
    if (idx == 25) return QObject::tr("Aleatorizar partícula");
    if (idx == 26) return QObject::tr("Rotar partícula");
    if (idx == 27) return QObject::tr("Variación de color");
    if (idx == 28) return QObject::tr("Variación de tono");
    if (idx == 29) return QObject::tr("Dispersar acuarela ");
    if (idx == 30) return QObject::tr("Mancha");
    if (idx == 31) return QObject::tr("Script del pincel");
    if (idx == 32) return QObject::tr("Forzar difuminado/atenuación");
    //if (idx == 33) return QObject::tr("ふちペン");
    //if (idx == 34) return QObject::tr("ふち幅");
    //if (idx == 35) return QObject::tr("パターン");
    //if (idx == 36) return QObject::tr("ビットマップ水彩");
    //if (idx == 37) return QObject::tr("Desplazamiento aleatorio");
    if (idx == 38) return QObject::tr("Fijación de la dirección de movimiento");
    if (idx == 39) return QObject::tr("La dirección del movimiento");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Name");
    if (idx == 1) return QObject::tr("Typ");
    if (idx == 2) return QObject::tr("Stift");
    if (idx == 3) return QObject::tr("Air-Brush");
    if (idx == 4) return QObject::tr("Radierer");
    if (idx == 5) return QObject::tr("Weite");
    if (idx == 6) return QObject::tr("Minimumbreite");
    if (idx == 7) return QObject::tr("Größe durch Druck");
    if (idx == 8) return QObject::tr("Deckkraft durch Druck");
    if (idx == 9) return QObject::tr("Pinsel editieren");
    if (idx == 10) return QObject::tr("Weichzeichner");
    if (idx == 11) return QObject::tr("Optionen");
    if (idx == 12) return QObject::tr("Stärke des Weichzeichners");
    if (idx == 13) return QObject::tr("Wasserfarbe");
    if (idx == 14) return QObject::tr("Eignung für Mischen");
    if (idx == 15) return QObject::tr("Farbe aufnehmen");
    if (idx == 16) return QObject::tr("Abgerundete Ecken");
    if (idx == 17) return QObject::tr("Bitmap");
    if (idx == 18) return QObject::tr("Rendering-Abstand");
    if (idx == 19) return QObject::tr("Rotieren");
    if (idx == 20) return QObject::tr("Beliebiges Rotieren");
    if (idx == 21) return QObject::tr("Vordergrundfarbe anwenden");
    if (idx == 22) return QObject::tr("Spritzer");
    if (idx == 23) return QObject::tr("Spritzerstärke");
    if (idx == 24) return QObject::tr("Partikelgröße");
    if (idx == 25) return QObject::tr("Partikel zufällig");
    if (idx == 26) return QObject::tr("Partikel rotieren");
    if (idx == 27) return QObject::tr("Farbflimmern");
    if (idx == 28) return QObject::tr("Farbtonflimmern");
    if (idx == 29) return QObject::tr("Spritzer Aquarell");
    if (idx == 30) return QObject::tr("Verwischen");
    if (idx == 31) return QObject::tr("Pinselscript");
    if (idx == 32) return QObject::tr("Ein-/Ausblenden erzwingen");
    if (idx == 33) return QObject::tr("Kantenstift");
    if (idx == 34) return QObject::tr("Kantenbreite");
    if (idx == 35) return QObject::tr("Muster");
    if (idx == 36) return QObject::tr("Bitmap-Wasserfarbe");
    //if (idx == 37) return QObject::tr("Zufällige Verschiebung");
    if (idx == 38) return QObject::tr("Feste Verschiebungsrichtung");
    if (idx == 39) return QObject::tr("Verschiebungsrichtung");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Nom");
    if (idx == 1) return QObject::tr("Type");
    if (idx == 2) return QObject::tr("Plume");
    if (idx == 3) return QObject::tr("Aérographe");
    if (idx == 4) return QObject::tr("Gomme");
    if (idx == 5) return QObject::tr("Largeur");
    if (idx == 6) return QObject::tr("Largeur min,");
    if (idx == 7) return QObject::tr("Taille par pression");
    if (idx == 8) return QObject::tr("Opacité par pression");
    if (idx == 9) return QObject::tr("Modifier le pinceau");
    if (idx == 10) return QObject::tr("Estompage");
    if (idx == 11) return QObject::tr("Options");
    if (idx == 12) return QObject::tr("Intensité de l'estompage");
    if (idx == 13) return QObject::tr("Aquarelle");
    if (idx == 14) return QObject::tr("Facilité à mélanger les couleurs ");
    if (idx == 15) return QObject::tr("Remplir les couleurs");
    if (idx == 16) return QObject::tr("Soft Edge");
    if (idx == 17) return QObject::tr("Bitmap");
    if (idx == 18) return QObject::tr("Espacement");
    if (idx == 19) return QObject::tr("Rotation");
    if (idx == 20) return QObject::tr("Rotation arbitraire");
    if (idx == 21) return QObject::tr("Appliquer la couleur précédente");
    if (idx == 22) return QObject::tr("Diffuser");
    if (idx == 23) return QObject::tr("Force de diffusion");
    if (idx == 24) return QObject::tr("Taille des particules");
    if (idx == 25) return QObject::tr("Particules aléatoires");
    if (idx == 26) return QObject::tr("Rotation des particules");
    if (idx == 27) return QObject::tr("Variation de couleur");
    if (idx == 28) return QObject::tr("Variation de teinte");
    if (idx == 29) return QObject::tr("Diffuser aquarelle");
    if (idx == 30) return QObject::tr("Doigt");
    if (idx == 31) return QObject::tr("Script pinceau");
    if (idx == 32) return QObject::tr("Forcer le fondu enchaîné");
    if (idx == 33) return QObject::tr("Stylet Contour");
    if (idx == 34) return QObject::tr("Largeur du contour");
    if (idx == 35) return QObject::tr("Motif");
    if (idx == 36) return QObject::tr("Aquarelle matricielle");
    //if (idx == 37) return QObject::tr("Déplacement aléatoire");
    if (idx == 38) return QObject::tr("Sens fixé du déplacement");
    if (idx == 39) return QObject::tr("Sens du déplacement");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Имя");
    if (idx == 1) return QObject::tr("Текст");
    if (idx == 2) return QObject::tr("Перо");
    if (idx == 3) return QObject::tr("Аэрограф");
    if (idx == 4) return QObject::tr("Ластик");
    if (idx == 5) return QObject::tr("Ширина");
    if (idx == 6) return QObject::tr("Мин. ширина");
    if (idx == 7) return QObject::tr("Размер по давлению");
    if (idx == 8) return QObject::tr("Непрозрачность по давлению");
    if (idx == 9) return QObject::tr("Настройки кисти");
    if (idx == 10) return QObject::tr("Размытие");
    if (idx == 11) return QObject::tr("Опции");
    if (idx == 12) return QObject::tr("Интенсивность размытия");
    if (idx == 13) return QObject::tr("Акварель");
    if (idx == 14) return QObject::tr("Простота смешения цветов");
    if (idx == 15) return QObject::tr("Заливка цветом");
    if (idx == 16) return QObject::tr("Размытый край");
    if (idx == 17) return QObject::tr("Растр");
    if (idx == 18) return QObject::tr("Интервал");
    if (idx == 19) return QObject::tr("Поворот");
    if (idx == 20) return QObject::tr("Произвольный поворот");
    if (idx == 21) return QObject::tr("Применить основной цвет");
    if (idx == 22) return QObject::tr("Рассеивание");
    if (idx == 23) return QObject::tr("Сила рассеивания");
    if (idx == 24) return QObject::tr("Размер частиц");
    if (idx == 25) return QObject::tr("Беспорядочное размещение частиц");
    if (idx == 26) return QObject::tr("Вращение частиц");
    if (idx == 27) return QObject::tr("Колебание цвета");
    if (idx == 28) return QObject::tr("Колебание цветового тона");
    if (idx == 29) return QObject::tr("Рассеивание акварели");
    if (idx == 30) return QObject::tr("Растушевка");
    if (idx == 31) return QObject::tr("Браш скрипт");
    if (idx == 32) return QObject::tr("Принудительное затухание или усиление");
    if (idx == 33) return QObject::tr("Edge Pen");
    if (idx == 34) return QObject::tr("Ширина края");
    if (idx == 35) return QObject::tr("Узор");
    if (idx == 36) return QObject::tr("Растровая акварель");
    //if (idx == 37) return QObject::tr("Произвольное смещение");
    if (idx == 38) return QObject::tr("Фиксация направления перемещения");
    if (idx == 39) return QObject::tr("Направление перемещения");
  }

  if (man->TranslateHindi())
  {
  }

  if (man->TranslateBengali())
  {
  }

  ///////////////////
  // 翻訳がないので英語で
  ///////////////////
  if (idx == 0) return QObject::tr("Name");
  if (idx == 1) return QObject::tr("Type");
  if (idx == 2) return QObject::tr("Pen");
  if (idx == 3) return QObject::tr("AirBrush");
  if (idx == 4) return QObject::tr("Eraser");
  if (idx == 5) return QObject::tr("Width");
  if (idx == 6) return QObject::tr("Min Width");
  if (idx == 7) return QObject::tr("Size by Pressure");
  if (idx == 8) return QObject::tr("Opacity by Pressure");
  if (idx == 9) return QObject::tr("Edit Brush");
  if (idx == 10) return QObject::tr("Blur");
  if (idx == 11) return QObject::tr("Options");
  if (idx == 12) return QObject::tr("Blur Intensity");
  if (idx == 13) return QObject::tr("Watercolor");
  if (idx == 14) return QObject::tr("Color Mixing Level");
  if (idx == 15) return QObject::tr("Complement");
  if (idx == 16) return QObject::tr("Soft Edge");
  if (idx == 17) return QObject::tr("Bitmap");
  if (idx == 18) return QObject::tr("Brush Spacing");
  if (idx == 19) return QObject::tr("Rotate");
  if (idx == 20) return QObject::tr("Random Rotate");
  if (idx == 21) return QObject::tr("Apply Foreground Color");
  if (idx == 22) return QObject::tr("Scatter");
  if (idx == 23) return QObject::tr("Scatter Strength");
  if (idx == 24) return QObject::tr("Particle Size");
  if (idx == 25) return QObject::tr("Particle Random");
  if (idx == 26) return QObject::tr("Particle Rotate");
  if (idx == 27) return QObject::tr("Color Jitter");
  if (idx == 28) return QObject::tr("Hue Jitter");
  if (idx == 29) return QObject::tr("Scatter Watercolor");
  if (idx == 30) return QObject::tr("Smudge");
  if (idx == 31) return QObject::tr("Brush Script");
  if (idx == 32) return QObject::tr("Force Fade In/Out");
  if (idx == 33) return QObject::tr("Edge Pen");
  if (idx == 34) return QObject::tr("Edge Width");
  if (idx == 35) return QObject::tr("Pattern");
  if (idx == 36) return QObject::tr("Bitmap Watercolor");
  if (idx == 37) return QObject::tr("Tone");
  if (idx == 38) return QObject::tr("Fixed displacement direction");
  if (idx == 39) return QObject::tr("Displacement direction");
  if (idx == 40) return QObject::tr("Rotate Along");
  if (idx == 41) return QObject::tr("Rotate Angle");
  if (idx == 42) return QObject::tr("Rotate Random");
  if (idx == 43) return QObject::tr("Roller (Ribbon)");
  if (idx == 44) return QObject::tr("Draw Once");
  if (idx == 45) return QObject::tr("Repeated");
  if (idx == 46) return QObject::tr("Random Order");
  if (idx == 47) return QObject::tr("Hue");
  if (idx == 48) return QObject::tr("Mix");
  if (idx == 49) return QObject::tr("Option");
  if (idx == 50) return QObject::tr("Pen Pressure Correction");
  if (idx == 51) return QObject::tr("There is no option");
  if (idx == 52) return QObject::tr("Blend");
  if (idx == 53) return QObject::tr("Softness");
  if (idx == 54) return QObject::tr("Rotate Random 2");
  if (idx == 55) return QObject::tr("Rotation of Drawing Unit");
  if (idx == 56) return QObject::tr("Rotation in Stroke Units");
  if (idx == 57) return QObject::tr("When there are multiple materials, the materials are drawn randomly");
  if (idx == 58) return QObject::tr("If there are multiple materials, it will be drawn repeatedly from the first material");
  if (idx == 60) return QObject::tr("Texture");
  if (idx == 61) return QObject::tr("Brush Texture");
  if (idx == 62) return QObject::tr("Texture Blend");
  if (idx == 63) return QObject::tr("Texture Effect");
  if (idx == 64) return QObject::tr("Multiply");
  if (idx == 65) return QObject::tr("Subtract");
  if (idx == 66) return QObject::tr("Scatter Mix");

  return "";
}
