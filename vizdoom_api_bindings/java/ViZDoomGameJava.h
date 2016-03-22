/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

/* Header for class ViZDoomGameJava */

#ifndef _Included_ViZDoomGameJava
#define _Included_ViZDoomGameJava

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ViZDoomGameJava
 * Method:    DoomTics2Ms
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_DoomTics2Ms
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    Ms2DoomTics
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_Ms2DoomTics
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    DoomFixedToDouble
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_DoomFixedToDouble
  (JNIEnv *, jobject, jint);


/*
 * Class:     ViZDoomGameJava
 * Method:    isBinaryButton
 * Signature: (Lenums/Button)Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_isBinaryButton
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    isDeltaButton
 * Signature: (Lenums/Button)Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_isDeltaButton
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    DoomGame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_DoomGame
  (JNIEnv *, jobject);


/*
 * Class:     ViZDoomGameJava
 * Method:    loadConfig
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_loadConfig
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_init
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_close
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    newEpisode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_newEpisode
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    isRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_isRunning
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setAction
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setAction
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     ViZDoomGameJava
 * Method:    advanceAction
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_advanceAction__
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    advanceAction
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_advanceAction__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    advanceAction
 * Signature: (IZZ)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_advanceAction__IZZ
  (JNIEnv *, jobject, jint, jboolean, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    makeAction
 * Signature: ([I)F
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_makeAction___3I
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     ViZDoomGameJava
 * Method:    makeAction
 * Signature: ([II)F
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_makeAction___3II
  (JNIEnv *, jobject, jintArray, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    getState
 * Signature: ()LGameState;
 */
JNIEXPORT jobject JNICALL Java_ViZDoomGameJava_getState
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getLastAction
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_ViZDoomGameJava_getLastAction
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    isNewEpisode
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_isNewEpisode
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    isEpisodeFinished
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_isEpisodeFinished
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    isPlayerDead
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ViZDoomGameJava_isPlayerDead
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    respawnPlayer
 * Signature: ()Z
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_respawnPlayer
  (JNIEnv *, jobject);



/*
 * Class:     ViZDoomGameJava
 * Method:    addAvailableButton
 * Signature: (Lenums/Button;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_addAvailableButton__Lenums_Button_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    addAvailableButton
 * Signature: (Lenums/Button;I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_addAvailableButton__Lenums_Button_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    clearAvailableButtons
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_clearAvailableButtons
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getAvailableButtonsSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getAvailableButtonsSize
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setButtonMaxValue
 * Signature: (Lenums/Button;I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setButtonMaxValue
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    getButtonMaxValue
 * Signature: (Lenums/Button)V
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getButtonMaxValue
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    addAvailableGameVariable
 * Signature: (Lenums/GameVariable;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_addAvailableGameVariable
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    clearAvailableGameVariables
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_clearAvailableGameVariables
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getAvailableGameVariablesSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getAvailableGameVariablesSize
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    addGameArgs
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_addGameArgs
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    clearGameArgs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_clearGameArgs
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    sendGameCommand
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_sendGameCommand
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    getGameScreen
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_ViZDoomGameJava_getGameScreen
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getMod
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getMod
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setMode
 * Signature: (Lenums/Mode;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setMode
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getGameVariable
 * Signature: (Lenums/GameVariable;)I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getGameVariable
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getLivingReward
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_getLivingReward
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setLivingReward
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setLivingReward
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     ViZDoomGameJava
 * Method:    getDeathPenalty
 * Signature: ()F
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_getDeathPenalty
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setDeathPenalty
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setDeathPenalty
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     ViZDoomGameJava
 * Method:    getLastReward
 * Signature: ()F
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_getLastReward
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getSummaryReward
 * Signature: ()F
 */
JNIEXPORT jdouble JNICALL Java_ViZDoomGameJava_getSummaryReward
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setViZDoomPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setViZDoomPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    setDoomGamePath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setDoomGamePath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    setDoomScenarioPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setDoomScenarioPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    setDoomMap
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setDoomMap
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    setDoomSkill
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setDoomSkill
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    setDoomConfigPath
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setDoomConfigPath
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ViZDoomGameJava
 * Method:    getSeed
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getSeed
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setSeed
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setSeed
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    getEpisodeStartTime
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getEpisodeStartTime
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setEpisodeStartTime
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setEpisodeStartTime
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    getEpisodeTimeout
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getEpisodeTimeout
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setEpisodeTimeout
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setEpisodeTimeout
  (JNIEnv *, jobject, jint);

/*
 * Class:     ViZDoomGameJava
 * Method:    getEpisodeTime
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getEpisodeTime
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setScreenResolution
 * Signature: (Lenums/ScreenResolution;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setScreenResolution
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setScreenFormat
 * Signature: (Lenums/ScreenFormat;)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setScreenFormat
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    setRenderHud
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setRenderHud
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    setRenderWeapon
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setRenderWeapon
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    setRenderCrosshair
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setRenderCrosshair
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    setRenderDecals
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setRenderDecals
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    setRenderParticles
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setRenderParticles
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    setWindowVisible
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setWindowVisible
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    setConsoleEnabled
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_ViZDoomGameJava_setConsoleEnabled
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     ViZDoomGameJava
 * Method:    getScreenWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getScreenWidth
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getScreenHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getScreenHeight
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getScreenChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getScreenChannels
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getScreenPitch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getScreenPitch
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getScreenSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     ViZDoomGameJava
 * Method:    getScreenForma
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ViZDoomGameJava_getScreenForma
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif