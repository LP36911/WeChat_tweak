//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BaseEmoticonViewDelegate.h"
#import "EditImageAnimatedDelegate.h"
#import "EditImageAnimatedOperationDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "EmoticonEditTextInputDelegate.h"
#import "EmoticonTextAntiSpamCgiDelegate.h"
#import "FSVideoInputDelegate.h"

@class EditImageAnimatedTextTool, EditImageColor, EditImageDeleteBarView, EmoticonBoardView, EmoticonCameraReportObject, EmoticonCameraResultSetting, EmoticonEditTextInputView, EmoticonEmptyEditView, EmoticonLensItemPB, EmoticonTabBarButton, FSVideoInput, MCFilterManager, MMTimer, NSString, SightPreviewViewF3, UIButton, UIImageView;

@interface EmoticonCameraResultView : UIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EditImageAnimatedOperationDelegate, EditImageAnimatedDelegate, EmoticonEditTextInputDelegate, EmoticonTextAntiSpamCgiDelegate, FSVideoInputDelegate>
{
    UIView *m_previewBGView;
    UIImageView *m_imageView;
    UIView *m_editToolsView;
    UIButton *m_removeBgButton;
    UIButton *m_fastPlayButton;
    UIButton *m_emoticonButton;
    EmoticonBoardView *m_emoticonBoardView;
    EmoticonEmptyEditView *m_editImageView;
    EditImageDeleteBarView *m_editDeleteBar;
    EditImageAnimatedTextTool *m_editImageTextView;
    EmoticonEditTextInputView *m_tempTextInputView;
    _Bool m_supportRemoveBackgroud;
    _Bool _waitForCaption;
    _Bool _isGPUFrozen;
    _Bool _isInterruptByGPUFrozen;
    _Bool _alreadySegmentMotion;
    _Bool _enableNewYearPendant;
    id <EmoticonCameraResultViewDelegate> _delegate;
    NSString *_caption;
    EditImageColor *_captionColor;
    NSString *_followMd5;
    NSString *_followLensId;
    EmoticonCameraReportObject *_reportObject;
    EmoticonLensItemPB *_selectedEmoticonLens;
    UIView *_bottomView;
    EmoticonTabBarButton *_cancelButton;
    EmoticonTabBarButton *_confirmButton;
    EmoticonCameraResultSetting *_resultSetting;
    MCFilterManager *_filterManager;
    FSVideoInput *_videoInput;
    SightPreviewViewF3 *_previewView;
    MMTimer *_timer;
    CDStruct_1b6d18a9 _currentFrameTime;
}

+ (double)EmoticonCameraPreviewSideLength;
- (void).cxx_destruct;
- (void)adjustEditImageAnimatedWidgetTool:(id)arg1;
@property(nonatomic) _Bool alreadySegmentMotion; // @synthesize alreadySegmentMotion=_alreadySegmentMotion;
- (id)bottomButtonImageFromImage:(id)arg1 andBackgroundColor:(id)arg2;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) EmoticonTabBarButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) EditImageColor *captionColor; // @synthesize captionColor=_captionColor;
- (void)changeRemoveBgState;
- (void)checkText:(id)arg1;
- (void)checkWaitForCaptionTimeOut;
- (void)compressWithImages:(id)arg1 setting:(id)arg2 overlayLayer:(id)arg3 useWxam:(_Bool)arg4 outputSize:(struct CGSize)arg5 withBlock:(CDUnknownBlockType)arg6;
- (void)configFilterManager;
@property(retain, nonatomic) EmoticonTabBarButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void)continueConfigPlayerView;
- (void)convertVideoPath:(id)arg1 setting:(id)arg2 overlayLayer:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) CDStruct_1b6d18a9 currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(nonatomic) __weak id <EmoticonCameraResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)deleteArea;
- (void)didClickCancel;
- (void)didClickDone;
- (void)didClickEmoticonButton:(id)arg1;
- (void)didClickFastPlayButton:(id)arg1;
- (void)didClickRemoveBgButton:(id)arg1;
- (void)didRealClickDone;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)editImageViewDidDeleteWidgetTool:(id)arg1;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (id)editToolsButtonWithTitle:(id)arg1 titileHL:(id)arg2 image:(id)arg3 imageSelected:(id)arg4 imageHL:(id)arg5 imageDisabled:(id)arg6;
@property(nonatomic) _Bool enableNewYearPendant; // @synthesize enableNewYearPendant=_enableNewYearPendant;
@property(retain, nonatomic) MCFilterManager *filterManager; // @synthesize filterManager=_filterManager;
@property(retain, nonatomic) NSString *followLensId; // @synthesize followLensId=_followLensId;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
- (id)initWithFrame:(struct CGRect)arg1;
@property _Bool isGPUFrozen; // @synthesize isGPUFrozen=_isGPUFrozen;
@property(nonatomic) _Bool isInterruptByGPUFrozen; // @synthesize isInterruptByGPUFrozen=_isInterruptByGPUFrozen;
- (void)onEmoticonEditTextInputCancel:(id)arg1;
- (void)onEmoticonEditTextInputDidChange:(id)arg1 isFirstTyping:(_Bool)arg2;
- (void)onEmoticonEditTextInputFinished:(id)arg1;
- (void)onEmoticonTextAntiSpamCgiFailed:(id)arg1;
- (void)onEmoticonTextAntiSpamCgiFinished:(id)arg1;
- (void)onSendButtonClicked;
- (void)playButtonAnimation;
@property(retain, nonatomic) SightPreviewViewF3 *previewView; // @synthesize previewView=_previewView;
- (id)privateCaptionColor;
@property(retain, nonatomic) EmoticonCameraReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) EmoticonCameraResultSetting *resultSetting; // @synthesize resultSetting=_resultSetting;
- (void)resumeCompose;
@property(retain, nonatomic) EmoticonLensItemPB *selectedEmoticonLens; // @synthesize selectedEmoticonLens=_selectedEmoticonLens;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)setRemoveBg:(_Bool)arg1;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FSVideoInput *videoInput; // @synthesize videoInput=_videoInput;
@property(nonatomic) _Bool waitForCaption; // @synthesize waitForCaption=_waitForCaption;
- (void)setupBgView;
- (void)setupBottomView;
- (void)setupEditImageTextView;
- (void)setupEditImageView;
- (void)setupEditTools;
- (void)setupPreviewBGView;
- (void)showResultWithImage:(id)arg1;
- (void)showResultWithVideoPath:(id)arg1;
- (_Bool)startEditingTextWithAnimatedWidgetTool:(id)arg1;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (id)trimText:(id)arg1;
- (void)updateVideoFrames;
- (void)videoInput:(id)arg1 didOutputSampleBuffer:(id)arg2;
- (void)videoInputDidFail:(id)arg1;
- (void)videoInputDidFinishReading:(id)arg1;
@property(readonly, nonatomic) NSString *videoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
