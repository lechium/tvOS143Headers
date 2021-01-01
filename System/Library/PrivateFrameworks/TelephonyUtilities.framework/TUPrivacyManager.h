/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TUPrivacyManager : NSObject

@property (nonatomic,copy,readonly) NSArray * privacyRules; 
+(id)sharedPrivacyManager;
-(id)init;
-(void)dealloc;
-(void)removeRule:(id)arg1 ;
-(void)addRule:(id)arg1 ;
-(void)_handleBlockListChanged:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forBusinessID:(id)arg2 ;
-(NSArray *)privacyRules;
-(BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1 ;
-(BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1 ;
-(BOOL)isIncomingCommunicationBlockedForBusinessID:(id)arg1 ;
-(id)allBlacklistRules;
@end

