/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVAsyncOperation.h>

@protocol _ML3MultiUserDaemonAccountChangeOperationDelegate, MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation {

	NSString* _initialDSID;
	NSString* _finalDSID;
	id<_ML3MultiUserDaemonAccountChangeOperationDelegate> _delegate;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,retain) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;                      //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialDSID;                                                      //@synthesize initialDSID=_initialDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * finalDSID;                                                        //@synthesize finalDSID=_finalDSID - In the implementation block
@property (assign,nonatomic,__weak) id<_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)delegate;
-(void)setDelegate:(id<_ML3MultiUserDaemonAccountChangeOperationDelegate>)arg1 ;
-(void)execute;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3 ;
-(NSString *)finalDSID;
-(NSString *)initialDSID;
@end

