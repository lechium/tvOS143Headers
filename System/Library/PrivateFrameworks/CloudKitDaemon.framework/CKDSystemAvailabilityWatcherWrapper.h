/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKDSystemAvailabilityWatcher;
@class NSString;

@interface CKDSystemAvailabilityWatcherWrapper : NSObject {

	id<CKDSystemAvailabilityWatcher> _delegate;
	unsigned long long _savedDelegateHash;
	NSString* _personaID;

}

@property (assign,nonatomic,__weak) id<CKDSystemAvailabilityWatcher> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long savedDelegateHash;                          //@synthesize savedDelegateHash=_savedDelegateHash - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                            //@synthesize personaID=_personaID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<CKDSystemAvailabilityWatcher>)delegate;
-(void)setDelegate:(id<CKDSystemAvailabilityWatcher>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)personaID;
-(void)setPersonaID:(NSString *)arg1 ;
-(void)postSystemAvailabilityChanged:(unsigned long long)arg1 ;
-(unsigned long long)savedDelegateHash;
-(void)setSavedDelegateHash:(unsigned long long)arg1 ;
@end

