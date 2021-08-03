/* -*- coding: utf-8 -*- マルチバイト */

#if defined(_MSC_VER)
  #pragma execution_character_set("utf-8")
#endif

#include "trans.h"
#include "trans_str_env.h"

///////////////////////////////////////////////////////////////////////////
// - 環境設定ダイアログで使用される文字列
// - A string used in the Preferences dialog.
///////////////////////////////////////////////////////////////////////////
QString Trans_StrEnv( int idx )
{
  CTranslationManager* man = &Trans();

  if (man->TranslateJapanese())
  {
    if (idx == 0) return QObject::tr("マウスホイールの方向");
    if (idx == 1) return QObject::tr("反転 (上方向で拡大表示、下方向で縮小表示)");
    if (idx == 2) return QObject::tr("回転角度");
    if (idx == 3) return QObject::tr("度");
    if (idx == 4) return QObject::tr("環境設定");
    if (idx == 5) return QObject::tr("Jpeg品質");
    if (idx == 6) return QObject::tr("ドラッグズーム");
    if (idx == 7) return QObject::tr("固定ズーム");
    if (idx == 8) return QObject::tr("スムーズズーム");
    if (idx == 9) return QObject::tr("上下にドラッグ");
    if (idx == 10) return QObject::tr("左右にドラッグ");

    if (idx == 16) return QObject::tr("ブラシ座標");
    if (idx == 17) return QObject::tr("タブレット座標を使う (推奨)");
    if (idx == 18) return QObject::tr("マウス座標を使う");
    if (idx == 19) return QObject::tr("起動時にアンチエイリアスを有効にする");
    if (idx == 20) return QObject::tr("右ボタン");
    if (idx == 21) return QObject::tr("消しゴム");
    if (idx == 22) return QObject::tr("スポイト");

    if (idx == 26) return QObject::tr("回転角バーを常に表示");

    if (idx == 41) return QObject::tr("ファイルパス表示");
    if (idx == 42) return QObject::tr("フルパスを表示する");
    if (idx == 43) return QObject::tr("ペンタブレット");
    if (idx == 44) return QObject::tr("HUION製タブレットで不具合がある場合にチェック");
    if (idx == 45) return QObject::tr("Wintab設定");
    if (idx == 46) return QObject::tr("筆圧を感知した瞬間にブラシを開始する");

    if (idx == 50) return QObject::tr("オートセーブ");
    if (idx == 51) return QObject::tr("オートセーブ機能を有効にする");

    if (idx == 52) return QObject::tr("キャンバスボタン");
    if (idx == 53) return QObject::tr("アルパカボタンを表示する");
    if (idx == 54) return QObject::tr("pixivボタンを表示する");

    if (idx == 60) return QObject::tr("ブラシ環境設定");
    if (idx == 61) return QObject::tr("筆圧感度");
    if (idx == 62) return QObject::tr("硬い");
    if (idx == 63) return QObject::tr("柔らかい");

    if (idx == 70) return QObject::tr("使用する筆圧API");
    if (idx == 71) return QObject::tr("Wintab + TabletPC");
    if (idx == 72) return QObject::tr("Wintab");
    if (idx == 73) return QObject::tr("TabletPC");

    if (idx == 80) return QObject::tr("マルチタッチ");
    if (idx == 81) return QObject::tr("キャンバス回転操作を有効にする");
    if (idx == 82) return QObject::tr("指でのキャンバス編集を有効にする");

    if (idx == 90) return QObject::tr("取り消し・やり直し");
    if (idx == 91) return QObject::tr("レイヤーの表示操作も取り消し対象にする");

    if (idx == 100) return QObject::tr("レイヤーフォルダ");
    if (idx == 101) return QObject::tr("通過ブレンドとして追加 (クリッピングできません)");
    if (idx == 102) return QObject::tr("通常ブレンドとして追加");

    if (idx == 110) return QObject::tr("レイヤーリストのフォント");
  }

  if (man->TranslateChineseSimp())
  {
    if (idx == 0) return QObject::tr("鼠标滚轮的方向");
    if (idx == 1) return QObject::tr("翻转");
    if (idx == 2) return QObject::tr("旋转角度");
    if (idx == 3) return QObject::tr("度");
    if (idx == 4) return QObject::tr("环境设定");
    if (idx == 5) return QObject::tr("Jpeg质量");
    if (idx == 6) return QObject::tr("拖拽变焦");
    if (idx == 7) return QObject::tr("固定变焦");
    if (idx == 8) return QObject::tr("平滑变焦");
    if (idx == 9) return QObject::tr("上下拖拽");
    if (idx == 10) return QObject::tr("左右拖拽");

    if (idx == 16) return QObject::tr("笔刷坐标");
    if (idx == 17) return QObject::tr("使用手写板坐标(推荐)");
    if (idx == 18) return QObject::tr("使用鼠标坐标");
    if (idx == 19) return QObject::tr("启动时自动打开抗锯齿效果");
    if (idx == 20) return QObject::tr("右键");
    if (idx == 21) return QObject::tr("橡皮擦");
    if (idx == 22) return QObject::tr("吸管");

    if (idx == 26) return QObject::tr("始终显示旋转角度杆");

    if (idx == 39) return QObject::tr("显示倍率");
    if (idx == 40) return QObject::tr("手动设定");

    if (idx == 50) return QObject::tr("自动保存");
    if (idx == 51) return QObject::tr("启用自动保存功能");
  }

  if (man->TranslateChineseTrad())
  {
    if (idx == 0) return QObject::tr("滑鼠滾輪的方向");
    if (idx == 1) return QObject::tr("反向");
    if (idx == 2) return QObject::tr("旋轉角度");
    if (idx == 3) return QObject::tr("度");
    if (idx == 4) return QObject::tr("環境設定");
    if (idx == 5) return QObject::tr("Jpeg品質");
    if (idx == 6) return QObject::tr("拖曳變焦");
    if (idx == 7) return QObject::tr("固定變焦");
    if (idx == 8) return QObject::tr("平滑變焦");
    if (idx == 9) return QObject::tr("上下拖曳");
    if (idx == 10) return QObject::tr("左右拖引");

    if (idx == 16) return QObject::tr("筆刷座標");
    if (idx == 17) return QObject::tr("使用手繪版座標(推薦)");
    if (idx == 18) return QObject::tr("使用滑鼠座標");
    if (idx == 19) return QObject::tr("啟動時打開反鋸齒效果");
    if (idx == 20) return QObject::tr("右鍵");
    if (idx == 21) return QObject::tr("橡皮擦");
    if (idx == 22) return QObject::tr("滴管");

    if (idx == 26) return QObject::tr("維持顯示旋轉角度滾軸");

    if (idx == 39) return QObject::tr("顯示倍率");
    if (idx == 40) return QObject::tr("手動設定");
  }

  if (man->TranslateKorean())
  {
    if (idx == 0) return QObject::tr("마우스 휠의 방향");
    if (idx == 1) return QObject::tr("반전");
    if (idx == 2) return QObject::tr("회전 각도");
    if (idx == 3) return QObject::tr("도");
    if (idx == 4) return QObject::tr("환경설정");
    if (idx == 5) return QObject::tr("Jpeg 품질");
    if (idx == 6) return QObject::tr("드래그 줌");
    if (idx == 7) return QObject::tr("고정 줌");
    if (idx == 8) return QObject::tr("스무스 줌");
    if (idx == 9) return QObject::tr("상하로 드래그");
    if (idx == 10) return QObject::tr("좌우로 드래그");

    if (idx == 16) return QObject::tr("브러시 좌표");
    if (idx == 17) return QObject::tr("태블릿 좌표를 사용 (권장)");
    if (idx == 18) return QObject::tr("마우스 좌표를 사용");
    if (idx == 19) return QObject::tr("기동 시에 안티에일리어싱을 유효로 함");
    if (idx == 20) return QObject::tr("오른쪽 버튼");
    if (idx == 21) return QObject::tr("지우개");
    if (idx == 22) return QObject::tr("스포이트");

    if (idx == 26) return QObject::tr("회전각 바를 항상 표시");

    if (idx == 39) return QObject::tr("표시배율");
    if (idx == 40) return QObject::tr("수동으로 설정하기");
  }

  if (man->TranslatePortugues())
  {
    if (idx == 0) return QObject::tr("Direção da Roda");
    if (idx == 1) return QObject::tr("Inverter");
    if (idx == 2) return QObject::tr("Grau de Rotação");
    if (idx == 3) return QObject::tr("grau");
    if (idx == 4) return QObject::tr("Configuração de Ambiente");
    if (idx == 5) return QObject::tr("Qualidade JPEG");
    if (idx == 6) return QObject::tr("Zoom ao Arrastar");
    if (idx == 7) return QObject::tr("Zoom por Predefinição %");
    if (idx == 8) return QObject::tr("Zoom Suave");
    if (idx == 9) return QObject::tr("Arrastar para cima e para baixo");
    if (idx == 10) return QObject::tr("Arrastar à esquerda e à direita");

    if (idx == 16) return QObject::tr("Coordenadas do Pincel");
    if (idx == 17) return QObject::tr("Usar Coordenadas do Tablet (recomendado)");
    if (idx == 18) return QObject::tr("Usar Coordenadas do Mouse");
    if (idx == 19) return QObject::tr("Ligar a configuração no início");
    if (idx == 20) return QObject::tr("Botão direito");
    if (idx == 21) return QObject::tr("Borracha");
    if (idx == 22) return QObject::tr("Conta-gotas");

    if (idx == 26) return QObject::tr("Sempre mostrar barra de rotação de ângulo");
  }

  if (man->TranslateSpanish())
  {
    if (idx == 0) return QObject::tr("Dirección de la rueda de desplazamiento del ratón");
    if (idx == 1) return QObject::tr("Invertir");
    if (idx == 2) return QObject::tr("Grados de rotación");
    if (idx == 3) return QObject::tr("°");
    if (idx == 4) return QObject::tr("Configuración del entorno");
    if (idx == 5) return QObject::tr("Calidad JPEG");
    if (idx == 6) return QObject::tr("Zoom por arrastre");
    if (idx == 7) return QObject::tr("Zoom predeterminado");
    if (idx == 8) return QObject::tr("Zoom suave");
    if (idx == 9) return QObject::tr("Arrastre vertical");
    if (idx == 10) return QObject::tr("Arrastre horizontal");

    if (idx == 16) return QObject::tr("Coordenadas del Pincel");
    if (idx == 17) return QObject::tr("Usar Coordenadas de la Tableta (recomendado)");
    if (idx == 18) return QObject::tr("Usar Coordenadas del Ratón");
    if (idx == 19) return QObject::tr("Activar la configuración al iniciar");
    if (idx == 20) return QObject::tr("Botón derecho");
    if (idx == 21) return QObject::tr("Borrador");
    if (idx == 22) return QObject::tr("Cuentagotas");

    if (idx == 26) return QObject::tr("Mostrar siempre barra de ángulo de rotación");

    if (idx == 39) return QObject::tr("Ampliación de la muestra");
    if (idx == 40) return QObject::tr("Ajustar el modo manual");
  }

  if (man->TranslateGerman())
  {
    if (idx == 0) return QObject::tr("Radrichtung");
    if (idx == 1) return QObject::tr("Invertieren");
    if (idx == 2) return QObject::tr("Drehungsgrad");
    if (idx == 3) return QObject::tr("Grad");
    if (idx == 4) return QObject::tr("Umwelteinstellung");
    if (idx == 5) return QObject::tr("JPEG-Qualität");
    if (idx == 6) return QObject::tr("Vergrößern durch Ziehen");
    if (idx == 7) return QObject::tr("Vergrößern durch Voreinstellung %");
    if (idx == 8) return QObject::tr("Reibungslose Vergrößerung");
    if (idx == 9) return QObject::tr("Nach oben- und unten ziehen");
    if (idx == 10) return QObject::tr("Nach rechts- und linksziehen");

    if (idx == 16) return QObject::tr("Pinselkoordinaten");
    if (idx == 17) return QObject::tr("Tablet-Koordinaten benutzen (empfohlen)");
    if (idx == 18) return QObject::tr("Mauskoordinaten benutzen");
    if (idx == 19) return QObject::tr("Beim Start Einstellungen einschalten");
    if (idx == 20) return QObject::tr("Rechtstaste");
    if (idx == 21) return QObject::tr("Radierer");
    if (idx == 22) return QObject::tr("Pipette");

    if (idx == 26) return QObject::tr("Rotationswinkelleiste immer anzeigen");
  }

  if (man->TranslateFrench())
  {
    if (idx == 0) return QObject::tr("Direction de la roue");
    if (idx == 1) return QObject::tr("Inverser");
    if (idx == 2) return QObject::tr("Degré de rotation");
    if (idx == 3) return QObject::tr("Degré");
    if (idx == 4) return QObject::tr("Paramètre d'environnement");
    if (idx == 5) return QObject::tr("Qualité JPEG");
    if (idx == 6) return QObject::tr("Faire un zoom à l'aide d'un glissement");
    if (idx == 7) return QObject::tr("Faire un zoom par % d'intervalle prédéfini");
    if (idx == 8) return QObject::tr("Faire un zoom régulier");
    if (idx == 9) return QObject::tr("Faire glisser vers le haut et vers le bas");
    if (idx == 10) return QObject::tr("Faire glisser vers la gauche et vers la droite");

    if (idx == 16) return QObject::tr("Coordonnées du pinceau");
    if (idx == 17) return QObject::tr("Utiliser les coordonnées de la tablette (recommandé)");
    if (idx == 18) return QObject::tr("Utiliser les coordonnées de la souris");
    if (idx == 19) return QObject::tr("Activer le paramètre au démarrage");
    if (idx == 20) return QObject::tr("Bouton droit");
    if (idx == 21) return QObject::tr("Gomme");
    if (idx == 22) return QObject::tr("Pipette");

    if (idx == 26) return QObject::tr("Toujours afficher la barre d'angle de rotation");
  }

  if (man->TranslateRussian())
  {
    if (idx == 0) return QObject::tr("Направление колеса");
    if (idx == 1) return QObject::tr("Инверсия");
    if (idx == 2) return QObject::tr("Градус поворота");
    if (idx == 3) return QObject::tr("градус");
    if (idx == 4) return QObject::tr("Настройки среды");
    if (idx == 5) return QObject::tr("Качество JPEG");
    if (idx == 6) return QObject::tr("Увеличить путем перетаскивания");
    if (idx == 7) return QObject::tr("Увеличить на определенный %");
    if (idx == 8) return QObject::tr("Плавное масштабирование");
    if (idx == 9) return QObject::tr("Перетащить вверх и вниз");
    if (idx == 10) return QObject::tr("Перетащить влево и вправо");

    if (idx == 16) return QObject::tr("Координаты кисти");
    if (idx == 17) return QObject::tr("Использовать координаты планшета (рекомендуется)");
    if (idx == 18) return QObject::tr("Использовать координаты мыши");
    if (idx == 19) return QObject::tr("Активируйте настройку во время загрузки");
    if (idx == 20) return QObject::tr("Правая кнопка");
    if (idx == 21) return QObject::tr("Ластик");
    if (idx == 22) return QObject::tr("Пипетка");

    if (idx == 26) return QObject::tr("Всегда отображать панель вращения угла");

    if (idx == 39) return QObject::tr("Отобразить увеличение");
    if (idx == 40) return QObject::tr("Настроить вручную");
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
  if (idx == 0) return QObject::tr("Wheel Direction");
  if (idx == 1) return QObject::tr("Invert (Zoom in on up, zoom out on down)");
  if (idx == 2) return QObject::tr("Rotation Degree");
  if (idx == 3) return QObject::tr("deg");
  if (idx == 4) return QObject::tr("Environment Setting");
  if (idx == 5) return QObject::tr("Jpeg Quality");
  if (idx == 6) return QObject::tr("Zoom by Dragging");
  if (idx == 7) return QObject::tr("Zoom by Preset %");
  if (idx == 8) return QObject::tr("Smooth Zoom");
  if (idx == 9) return QObject::tr("Drag Up & Down");
  if (idx == 10) return QObject::tr("Drag Left & Right");

  if (idx == 16) return QObject::tr("Brush Coordinate");
  if (idx == 17) return QObject::tr("Use Tablet Coordinate (recommended)");
  if (idx == 18) return QObject::tr("Use Mouse Coordinate");
  if (idx == 19) return QObject::tr("Turn on the setting at start-up");
  if (idx == 20) return QObject::tr("Right Button");
  if (idx == 21) return QObject::tr("Eraser");
  if (idx == 22) return QObject::tr("Eyedropper");

  if (idx == 26) return QObject::tr("Always display Rotation Angle Bar");

  if (idx == 39) return QObject::tr("Display magnification");
  if (idx == 40) return QObject::tr("Set to manual");
  if (idx == 41) return QObject::tr("File Path Indication");
  if (idx == 42) return QObject::tr("Display Full Path");
  if (idx == 43) return QObject::tr("Pen Tablet");
  if (idx == 44) return QObject::tr("Check if there is a problem with HUION Tablet");
  if (idx == 45) return QObject::tr("Wintab Settings");
  if (idx == 46) return QObject::tr("Start brushing when pen pressure is detected");

  if (idx == 50) return QObject::tr("Auto Save");
  if (idx == 51) return QObject::tr("Enable Auto Save Function");

  if (idx == 52) return QObject::tr("Canvas Button");
  if (idx == 53) return QObject::tr("Show Alpaca Button");
  if (idx == 54) return QObject::tr("Show pixiv Button");

  if (idx == 60) return QObject::tr("Brush Environment Settings");
  if (idx == 61) return QObject::tr("Pressure Sensitivity");
  if (idx == 62) return QObject::tr("Hard");
  if (idx == 63) return QObject::tr("Soft");

  if (idx == 70) return QObject::tr("Select Pen Pressure API");
  if (idx == 71) return QObject::tr("Wintab + TabletPC");
  if (idx == 72) return QObject::tr("Wintab");
  if (idx == 73) return QObject::tr("TabletPC");

  if (idx == 80) return QObject::tr("Multi-touch");
  if (idx == 81) return QObject::tr("Enable canvas rotation operation");
  if (idx == 82) return QObject::tr("Enable finger canvas editing");

  if (idx == 90) return QObject::tr("Undo/Redo");
  if (idx == 91) return QObject::tr("Apply layer display operations");

  if (idx == 100) return QObject::tr("Layer Folder");
  if (idx == 101) return QObject::tr("Added as Through Blend (cannot be clipped)");
  if (idx == 102) return QObject::tr("Added as a Normal Blend");

  if (idx == 110) return QObject::tr("Layer List Font");

  return "";
}
