/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"
//
//#import "FBRequestDelegate-Protocol.h"
//#import "FBWebRTCCallActionViewDelegate-Protocol.h"
//#import "FBWebRTCCallStatusBarViewControllerDelegate-Protocol.h"
//#import "FBWebRTCRingtoneManagerObserver-Protocol.h"
//#import "FBWebRTCSurveyViewDelegate-Protocol.h"
//#import "UIAlertViewDelegate-Protocol.h"

@class CroppedImageCache, FBMMQTTSender, FBMRequest, FBMUser, FBProviderMapData, FBWebRTCCallStatusBarViewController, FBWebRTCRingtoneManager, FBWebRTCView, NSDate, NSNumber, NSString, NSTimer, UIAlertView;

@interface FBWebRTCViewController : UIViewController //<UIAlertViewDelegate, FBWebRTCCallActionViewDelegate, FBWebRTCRingtoneManagerObserver, FBWebRTCSurveyViewDelegate, FBWebRTCCallStatusBarViewControllerDelegate, FBRequestDelegate>
{
    FBWebRTCView *_webRTCView;
    struct WebRTCUIInterfaceCallback *_callback;
    struct FBWebRTCLogWrapper *_logger;
    FBMUser *_user;
    FBMRequest *_picRequest;
    BOOL _showAcceptDialog;
    CroppedImageCache *_imageCache;
    FBWebRTCCallStatusBarViewController *_callStatusVC;
    BOOL _hasConnected;
    BOOL _isOutgoingCall;
    BOOL _acknowledgedCall;
    BOOL _userHungUpCall;
    FBWebRTCRingtoneManager *_ringtoneManager;
    NSDate *_callTimerStartDate;
    NSTimer *_callTimer;
    NSTimer *_endCallTimer;
    NSTimer *_surveyTimer;
    NSNumber *_callDuration;
    double _surveyPercent;
    unsigned int _callId;
    BOOL _callIsEnding;
    BOOL _showSurveyFeedback;
    BOOL _speakerMode;
    BOOL _muted;
    NSDate *_callStartDate;
    FBMMQTTSender *_mqttSender;
    id _foregroundRingtoneNotif;
    FBProviderMapData *_providerMap;
    BOOL _callBarVisible;
    NSString *_lastStatus;
    UIAlertView *_alertView;
    UIAlertView *_endCallAlertView;
}

@property(retain, nonatomic) UIAlertView *endCallAlertView; // @synthesize endCallAlertView=_endCallAlertView;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSString *lastStatus; // @synthesize lastStatus=_lastStatus;
- (id)_objectForKeys:(id)arg1 inNestedDictionaries:(id)arg2;
- (void)dealloc;
- (void)unloadViews;
- (void)handleEndAudioInterrupt;
- (void)handleBeginAudioInterrupt;
- (void)publishCallRecord;
- (id)getCallDuration;
- (void)setMuted:(BOOL)arg1;
- (BOOL)shouldShowMissedCall;
- (void)showEndCallForCallId:(unsigned int)arg1 withPresenter:(id)arg2;
- (void)dismissSurvey;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)feedbackPressed;
- (void)surveyButtonTapped:(id)arg1;
- (void)timeoutFeedbackAlert;
- (void)timeoutRedial;
- (void)timeoutSurvey;
- (void)endCall;
- (void)dismissCallView:(BOOL)arg1;
- (BOOL)shouldShowSurvey;
- (void)endCallImmediately;
- (void)cleanUpEndCall;
- (void)updateCallTimer;
- (void)startCallTimer;
- (BOOL)hasConnected;
- (void)showConnectionDetails:(id)arg1 andIsConnected:(BOOL)arg2;
- (void)showConnected;
- (void)showRinging;
- (void)showContacting;
- (void)callActionViewDidPressHideCall:(id)arg1;
- (void)callActionViewDidPressMute:(id)arg1 shouldMute:(BOOL)arg2;
- (void)callActionViewDidPressSpeaker:(id)arg1;
- (void)callActionViewDidPressRedial:(id)arg1;
- (void)callActionViewDidPressCancelRedial:(id)arg1;
- (void)callActionViewDidPressDeclineCall:(id)arg1;
- (void)callActionViewDidPressAcceptCall:(id)arg1;
- (void)callActionViewDidPressEndCall:(id)arg1;
- (void)didAcceptIncomingCall:(id)arg1;
- (void)setStartCallTrigger:(id)arg1;
- (void)setWebRTCLogger:(struct FBWebRTCLogWrapper *)arg1;
- (void)setWebRTCCallback:(struct WebRTCUIInterfaceCallback *)arg1;
- (void)setStatus:(id)arg1;
- (void)didTapCallStatusBarView:(id)arg1;
- (void)dismissStatusBar;
- (void)setUserPicture:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)displayUserPicture;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)_fetchCoverPicUrl;
- (void)loadView;
- (id)initWithUser:(id)arg1 showAcceptDialog:(BOOL)arg2 croppedImageCache:(id)arg3 shouldPlayAudio:(BOOL)arg4 isOutgoingCall:(BOOL)arg5 surveyPercent:(double)arg6 showSurveyFeedback:(BOOL)arg7 mqttSender:(id)arg8 providerMap:(id)arg9;

@end

