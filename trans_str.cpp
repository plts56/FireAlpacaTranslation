/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str.h"

using namespace neet;

///////////////////////////////////////////////////////////////////////////
// - ペイントエンジン内部や、キャプションとして表示される文字列
// - Text that appears inside the paint engine or as a caption
///////////////////////////////////////////////////////////////////////////
nstring Trans_Str( neet::TMangaString ms )
{
  CTranslationManager* man = &Trans();
  QString s;

  if (man->TranslateJapanese())
  {
    if (ms == MS_LAYER) s = QObject::tr("レイヤー");
    if (ms == MS_PASTE) s = QObject::tr("貼り付け");
    if (ms == MS_FOLDER) s = QObject::tr("フォルダー");
    if (ms == MS_FRAME) s = QObject::tr("フレーム");
    if (ms == MS_MASK) s = QObject::tr("マスク");
    if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Shiftキーを押しながらで追加、Ctrlキーを押しながらで削除");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("レイヤーがロックされているので編集できません");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Ctrlキーを押しながらで15度単位の回転");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Shiftキーを押しながらで水平・垂直に操作");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Shiftキーを押しながらで直線描画、Ctrl+Altキーを押しながら左右ドラッグでブラシサイズ変更");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("クリックでズームイン. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("クリックでズームアウト. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("上下ドラッグでズーム.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("左右ドラッグでズーム.");

    if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("4点クリックで消失点を指定");
    if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋ドラッグでスナップ頂点の移動");
    if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋ドラッグで楕円スナップ作成");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("ドラッグで分割、+Shiftで自由な角度");
    if (ms == MS_CAP_MARK) s = QObject::tr("Ctrl+クリックで基点指定 (キャンバス)");

    if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[ふちペン] Ctrlキーを押しながらでエッジを保持して描画");
    if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[ふちペン] 不透明ブラシの場合、エッジを保持して描画できます");
    if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrlキーを押しながら辺をドラッグすると長さを維持して平行移動");

    if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateChineseSimp())
  {
    if (ms == MS_LAYER) s = QObject::tr("图层");
    if (ms == MS_PASTE) s = QObject::tr("粘贴");
    if (ms == MS_FOLDER) s = QObject::tr("文件夹");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("按Shift 键来追加,按Ctrl键来删除");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("因为图层被锁定所以无法编辑");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("按 Ctrl 键来旋转 15 度单位");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("按 Shift 键来水平．垂直地操作");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("边按 Shift 键边画直线、 边按Ctrl+Alt 键边左右拖引来变更尺寸");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("单击放大. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("单击缩小. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("上下拖引缩放.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("左右拖引缩放.");
    
    if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("点击4处以指定消失点");
    if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋拖拽移动规尺顶点");
    if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋拖拽作成椭圆规尺");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("拖拽来分割；用+Shift来设置任意的角度");
    if (ms == MS_CAP_MARK) s = QObject::tr("Ctrl+点击指定基点 (画布)");

    if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[中空笔刷] 长按Ctrl键保持边缘描画");
    if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[中空笔刷] 使用不透明笔刷时，可保持边缘描画");
    if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("长按Ctrl键同时拖拽边缘即可在维持长度同时平行移动");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateChineseTrad())
  {
    if (ms == MS_LAYER) s = QObject::tr("圖層");
    if (ms == MS_PASTE) s = QObject::tr("貼上");
    if (ms == MS_FOLDER) s = QObject::tr("資料夾");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("按 Shift 鍵追加，按 Ctrl鍵刪除");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("已鎖定圖層無法進行編輯");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("按 Ctrl 鍵以 15 度為單位旋轉");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("按 Shift 鍵進行水準．垂直操作");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("按著 Shift 鍵繪製直線、 按著 Ctrl+Alt 鍵左右拖曳變更尺寸");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("單點擊放大. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("單點擊縮小. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("上下拖曳縮放.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("左右拖曳縮放.");

    if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("點擊4頂點指定消失點");
    if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl+拖曳移動輔助頂點");
    if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl+拖曳製作橢圓輔助");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("以拖曳分割，+Shift自由變化角度");
    if (ms == MS_CAP_MARK) s = QObject::tr("Ctrl+點擊指定基準點 (畫布)");

    if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[中空筆] 按著Ctrl鍵操作即可維持邊緣進行繪圖");
    if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[中空筆] 使用不透明筆刷時，能夠維持邊緣進行繪圖");
    if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("按著Ctrl鍵拖曳邊緣即可維持長度平行移動");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateKorean())
  {
    if (ms == MS_LAYER) s = QObject::tr("레이어");
    if (ms == MS_PASTE) s = QObject::tr("붙여넣기");
    if (ms == MS_FOLDER) s = QObject::tr("폴더");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Shift 키를 누르면서 추가, Ctrl키를 누르면서 삭제");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("레이어가 잠겨 있으므로 편집할 수 없습니다");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Ctrl 키를 누르면서 15도 단위의 회전");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Shift 키를 누르면서 수평·수직으로 조작");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Shift 키를 누르면서 직선 그리기, Ctrl+Alt키를 누르면서 좌우 드래그로 브러시 사이즈 변경");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("클릭으로 줌 인. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("클릭으로 줌 아웃. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("상하 드래그로 줌.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("좌우 드래그로 줌.");

    if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("4기점 클릭으로 소실점을 지정");
    if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋드래그로 스냅기점의 이동");
    if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋드래그로 타원스냅 작성");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("드래그로 분할, +Shift로 자유로운 각도");
    if (ms == MS_CAP_MARK) s = QObject::tr("Ctrl+클릭으로 기점 지정 (캔버스)");

    if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[테두리펜] Ctrl키를 누른상태로 선을 그리면 테두리를 유지");
    if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[테두리펜] 불투명 브러시의 경우, 테두리의 유지가 가능");
    if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrl키를 누른상태로 드래그하면 길이를 유지한 채로 평행이동");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslatePortugues())
  {
    if (ms == MS_LAYER) s = QObject::tr("Camada");
    if (ms == MS_PASTE) s = QObject::tr("Colar");
    //if (ms == MS_FOLDER) s = QObject::tr("フォルダー");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Adicione mantendo a tecla Shift pressionada. exclua mantendo a tecla Ctrl pressionada");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("Não é possível editar pois a camada está bloqueada");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Gire a cada 15 graus ao manter a tecla Ctrl pressionada");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Mova horizontal/perpendicularmente ao manter a tecla Shift pressionada");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Desenhe uma linha reta ao manter a tecla Shift pressionada, altere o tamanho de um pincel ao manter as teclas Ctrl + Alt pressionadas e arrastando");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("Aumentar zoom com clique. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("Diminuir zoom com clique. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("Aumentar e Diminuir Zoom arrastando para cima e para baixo.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("Aumentar e Diminuir Zoom arrastando à esquerda e à direita.");

    //if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("4点クリックで消失点を指定");
    //if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋ドラッグでスナップ頂点の移動");
    //if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋ドラッグで楕円スナップ作成");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("Divida arrastando e ajuste qualquer ângulo com +Shift");
    if (ms == MS_CAP_MARK) s = QObject::tr("Especifique o ponto base com Ctrl + Clique (tela)");

    //if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[ふちペン] Ctrlキーを押しながらでエッジを保持して描画");
    //if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[ふちペン] 不透明ブラシの場合、エッジを保持して描画できます");
    //if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrlキーを押しながら辺をドラッグすると長さを維持して平行移動");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateSpanish())
  {
    if (ms == MS_LAYER) s = QObject::tr("Capa");
    if (ms == MS_PASTE) s = QObject::tr("Pegar");
    if (ms == MS_FOLDER) s = QObject::tr("Carpeta");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Para agregar, mantenga pulsada la tecla Mayús. Para borrar, mantenga pulsada la tecla Ctrl");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("No se puede editar porque la capa está bloqueada");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Para girar en incrementos de 15°, mantanga presionada la tecla Ctrl");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Para mover en forma horizontal o perpendicaular, mantenga pulsada la tecla Mayús");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Para trazar una línea recta, mantenga pulsada la tecla Mayús. Para cambiar el tamaño del pincel, mantenga pulsada las teclas Ctrl + Alt y arrastre");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("Para acercar, haga clic. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("Para alejar, haga clic. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("Para acercar y alejar, arrastre hacia arriba y abajo.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("Para acercar y alejar, arrastre a derecha e izquierda.");

    if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("Determinar punto de fuga con un click de 4 puntos");
    if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl + arrastar moviendo el punto del vértice");
    if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Crear punto de elipse con Ctrl + arrastrar");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("Arrastra para dividir, y ajusta cualquier ángulo con +Shift");
    if (ms == MS_CAP_MARK) s = QObject::tr("Especifica el punto base con Control + clic (Lienzo)");

    //if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[ふちペン] Ctrlキーを押しながらでエッジを保持して描画");
    //if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[ふちペン] 不透明ブラシの場合、エッジを保持して描画できます");
    //if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrlキーを押しながら辺をドラッグすると長さを維持して平行移動");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateGerman())
  {
    if (ms == MS_LAYER) s = QObject::tr("Ebene");
    if (ms == MS_PASTE) s = QObject::tr("Einfügen");
    //if (ms == MS_FOLDER) s = QObject::tr("フォルダー");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Umschalttaste gedrückt halten, um Hinzuzufügen. STRG gedrückt halten, um zu löschen.");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("Kann nicht bearbeitet werden, da die Ebene gesperrt ist");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("STRG gedrückt halten, um aller 15 Grad zu drehen");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Umschalttaste gedrückt halten, um horizontal/senkrecht zu verschieben");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Umschalttaste gedrückt halten, um eine gerade Linie zu zeichnen. STRG + Alt gedrückt halten und ziehen, um Pinselgröße zu ändern.");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("Vergrößern durch Klicken. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("Verkleinern durch Klicken. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("Vergrößern und Verkleinern durch hoch- und runterziehen.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("Vergrößern und Verkleinern durch rechts und links ziehen.");

    //if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("4点クリックで消失点を指定");
    //if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋ドラッグでスナップ頂点の移動");
    //if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋ドラッグで楕円スナップ作成");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("Teilen Sie durch Ziehen und setzen Sie einen beliebigen Winkel mit + Umschalttaste.");
    if (ms == MS_CAP_MARK) s = QObject::tr("Bestimmen Sie mit Strg + Klick den Basispunkt (Leinwand).");

    //if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[ふちペン] Ctrlキーを押しながらでエッジを保持して描画");
    //if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[ふちペン] 不透明ブラシの場合、エッジを保持して描画できます");
    //if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrlキーを押しながら辺をドラッグすると長さを維持して平行移動");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateFrench())
  {
    if (ms == MS_LAYER) s = QObject::tr("Masque");
    if (ms == MS_PASTE) s = QObject::tr("Coller");
    //if (ms == MS_FOLDER) s = QObject::tr("フォルダー");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Pour ajouter, maintenir la touche Maj. enfoncée. Pour supprimer, maintenir la touche Ctrl enfoncée");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("Impossible de modifier parce que le masque est verrouillé");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Pour faire pivoter par intervalle de 15 degrés, maintenir la touche Ctrl enfoncée");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Pour déplacer horizontalement/verticalement, maintenir la touche Maj. enfoncée");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Pour tracer une ligne droite, maintenir la touche Maj. enfoncée. Pour modifier la taille du pinceau, maintenir les touches Ctrl + Alt enfoncée, puis faire glisser");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("Cliquer pour faire un zoom avant. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("Cliquer pour faire un zoom arrière. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("Pour faire un zoom avant ou arrière, faire glisser respectivement vers le haut ou le bas.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("Pour faire un zoom avant ou arrière, faire glisser respectivement vers la gauche ou la droite.");

    //if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("4点クリックで消失点を指定");
    //if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋ドラッグでスナップ頂点の移動");
    //if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋ドラッグで楕円スナップ作成");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("Diviser en déplaçant et choisir l'angle avec +Shift");
    if (ms == MS_CAP_MARK) s = QObject::tr("Spécifier le point de base avec Ctrl+clic (zone de travail)");

    //if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[ふちペン] Ctrlキーを押しながらでエッジを保持して描画");
    //if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[ふちペン] 不透明ブラシの場合、エッジを保持して描画できます");
    //if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrlキーを押しながら辺をドラッグすると長さを維持して平行移動");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
  }

  if (man->TranslateRussian())
  {
    if (ms == MS_LAYER) s = QObject::tr("Слой");
    if (ms == MS_PASTE) s = QObject::tr("Вклеить");
    if (ms == MS_FOLDER) s = QObject::tr("Папка");
    //if (ms == MS_MASK) s = QObject::tr("マスク");
    //if (ms == MS_STENCIL) s = QObject::tr("ステンシル");

    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Добавить, удерживая клавишу Shift; удалить, удерживая клавишу Ctrl");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("Редактирование невозможно – слой заблокирован");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Поворачивайте каждые 15 градусов, удерживая клавишу Ctrl");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Перемещайте по горизонтали / перпендикулярно, удерживая клавишу Shift");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Рисуйте прямую линию, удерживая клавишу Shift; изменяйте размер кисти, удерживая клавиши Ctrl + Alt и перетаскивая");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("Увеличивайте, нажав на кнопку мыши. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("Уменьшайте, нажав на кнопку мыши. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("Увеличивайте и уменьшайте, перетаскивая вверх-вниз.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("Увеличивайте и уменьшайте, перетаскивая вправо-влево.");

    //if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("4点クリックで消失点を指定");
    //if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Ctrl＋ドラッグでスナップ頂点の移動");
    //if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Ctrl＋ドラッグで楕円スナップ作成");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("Для того чтобы разделить, перетяните, а затем установите произвольный угол, удерживая Shift");
    if (ms == MS_CAP_MARK) s = QObject::tr("Определите базовую точку нажатием Ctrl+Click (Холст)");

    //if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[ふちペン] Ctrlキーを押しながらでエッジを保持して描画");
    //if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[ふちペン] 不透明ブラシの場合、エッジを保持して描画できます");
    //if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Ctrlキーを押しながら辺をドラッグすると長さを維持して平行移動");

    //if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("+Shiftキーでキャンバス色取得");
    //if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("+Shiftキーでアクティブレイヤー色取得");
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
  if (s.length() == 0)
  {
    // レイヤー名に使用
    if (ms == MS_LAYER) s = QObject::tr("Layer");
    if (ms == MS_PASTE) s = QObject::tr("Paste");
    if (ms == MS_FOLDER) s = QObject::tr("Folder");
    if (ms == MS_FRAME) s = QObject::tr("Frame");
    if (ms == MS_MASK) s = QObject::tr("Mask");
    if (ms == MS_STENCIL) s = QObject::tr("Stencil");

    // キャプション
    if (ms == MS_CAP_SELECT_OPTION) s = QObject::tr("Add by holding down Shift. Delete by holding down Ctrl.");
    if (ms == MS_CAP_LAYER_IS_LOCKED) s = QObject::tr("Cannot be edited because the layer is locked");
    if (ms == MS_CAP_SNAP_15DEG) s = QObject::tr("Rotate 15 degrees by holding down Ctrl");
    if (ms == MS_CAP_SHIFT_VH) s = QObject::tr("Move Horizontally/Perpendicularly by holding down Shift");
    if (ms == MS_CAP_ON_BRUSH) s = QObject::tr("Draw a straight line by holding down Shift, Change a brush size by holding down Ctrl, Alt, and dragging");

    if (ms == MS_CAP_CLICK_TO_ZOOMIN) s = QObject::tr("Zoom In by Clicking. ");
    if (ms == MS_CAP_CLICK_TO_ZOOMOUT) s = QObject::tr("Zoom Out by Clicking. ");
    if (ms == MS_CAP_DRAG_UD_ZOOM) s = QObject::tr("Zoom In and Out by dragging up and down.");
    if (ms == MS_CAP_DRAG_LR_ZOOM) s = QObject::tr("Zoom In and Out by dragging left and right.");

    if (ms == MS_CAP_PARA_FOUR) s = QObject::tr("Determine a vanishing point with 4 clicks.");
    if (ms == MS_CAP_SNAP_CURVEMOVE) s = QObject::tr("Move snap vertex by Ctrl + drag");
    if (ms == MS_CAP_SNAP_ELLIPSE) s = QObject::tr("Create ellipse snap by Ctrl + drag");

    if (ms == MS_CAP_DIVIDE) s = QObject::tr("Divide horizontally and vertically by dragging, divide on angles  by holding Shift");
    if (ms == MS_CAP_MARK) s = QObject::tr("Specify the base point by Ctrl+Click (Canvas)");

    if (ms == MS_CAP_KEEPEDGE) s = QObject::tr("[Edge Pen] Draw without overlapping by holding down the Ctrl key");
    if (ms == MS_CAP_KEEPEDGE_COND) s = QObject::tr("[Edge Pen] An opaque brush that enables you to draw with an edge");
    if (ms == MS_CAP_KEEP_SIDE) s = QObject::tr("Clicking Ctrl and dragging will allow for length to be preserved");

    if (ms == MS_CAP_SPOIT_CANVAS) s = QObject::tr("Get canvas color with +Shift");
    if (ms == MS_CAP_SPOIT_ACTIVE) s = QObject::tr("Get active layer color with +Shift");
  }

  /////////////////////////
  // 内部使用 (表示されない)
  /////////////////////////
  if (ms == MS_VECT_RECT) s = QObject::tr("Rect");
  if (ms == MS_VECT_ELLIPSE) s = QObject::tr("Ellipse");
  if (ms == MS_VECT_POLYGON) s = QObject::tr("Polygon");
  if (ms == MS_VECT_LINE) s = QObject::tr("Line");
  if (ms == MS_VECT_FRAME) s = QObject::tr("Frame");
  if (ms == MS_VECT_STROKE) s = QObject::tr("Stroke");

  ////////////////////////////////////////////////////////////
  // Macだったら、"Alt" を "option" に差し替えなど
  ////////////////////////////////////////////////////////////
#if defined(__NEET_QT_MAC__)
  // 英語
  s.replace( QObject::tr("Alt"), QObject::tr("option") );
  s.replace( QObject::tr("Ctrl"), QObject::tr("command") );
  s.replace( QObject::tr("Shift"), QObject::tr("shift") );
  // スペイン語
  s.replace( QObject::tr("Mayús"), QObject::tr("shift") );
  // ドイツ語
  s.replace( QObject::tr("STRG"), QObject::tr("command") );
  s.replace( QObject::tr("Umschalttaste"), QObject::tr("shift") );
  // フランス語
  s.replace( QObject::tr("Maj"), QObject::tr("shift") );
#endif

  return s.toStdWString();
}
