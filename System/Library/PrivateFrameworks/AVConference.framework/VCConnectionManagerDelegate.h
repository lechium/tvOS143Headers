/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCConnectionManagerDelegate <VCLinkProbingHandlerDelegate>
@optional
-(void)handleRATChanged:(id)arg1;
-(void)discardConnection:(id)arg1;
-(void)updateParticipantGenerationCounter:(unsigned char)arg1;
-(void)resetParticipantGenerationCounter;
-(void)optOutAllStreamsForConnection:(id)arg1;

@required
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;

@end

