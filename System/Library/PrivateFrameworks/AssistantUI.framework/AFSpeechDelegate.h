/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFSpeechDelegate <NSObject>
@optional
-(void)assistantConnectionDidChangeAudioRecordingPower:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg2;
-(void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 audioSessionID:(unsigned)arg3;
-(void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
-(void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingPerformTwoShotPromptWithType:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
-(void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3;
-(void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4;
-(void)assistantConnection:(id)arg1 recognitionUpdateWillBeginForTask:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
-(void)assistantConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;

@end
