/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSBiometricAuthenticationContext;

@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {

	BOOL _shouldPostFooterSectionChanged;
	BOOL _shouldProcessAccount;
	BOOL _shouldProcessAuthenticationDialogs;
	BOOL _shouldProcessDialogs;
	BOOL _shouldProcessDialogsOutsideDaemon;
	BOOL _shouldProcessProtocol;
	BOOL _shouldProcessTouchIDDialogs;
	BOOL _shouldTriggerDownloads;
	SSBiometricAuthenticationContext* _biometricAuthenticationContext;

}

@property (assign) BOOL shouldPostFooterSectionChanged;                  //@synthesize shouldPostFooterSectionChanged=_shouldPostFooterSectionChanged - In the implementation block
@property (assign) BOOL shouldProcessAccount;                            //@synthesize shouldProcessAccount=_shouldProcessAccount - In the implementation block
@property (assign) BOOL shouldProcessAuthenticationDialogs;              //@synthesize shouldProcessAuthenticationDialogs=_shouldProcessAuthenticationDialogs - In the implementation block
@property (assign) BOOL shouldProcessDialogs;                            //@synthesize shouldProcessDialogs=_shouldProcessDialogs - In the implementation block
@property (assign) BOOL shouldProcessDialogsOutsideDaemon;               //@synthesize shouldProcessDialogsOutsideDaemon=_shouldProcessDialogsOutsideDaemon - In the implementation block
@property (assign) BOOL shouldProcessProtocol;                           //@synthesize shouldProcessProtocol=_shouldProcessProtocol - In the implementation block
@property (readonly) BOOL shouldProcessTouchIDDialogs; 
@property (assign) BOOL shouldTriggerDownloads;                          //@synthesize shouldTriggerDownloads=_shouldTriggerDownloads - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)shouldProcessProtocol;
-(void)setShouldProcessProtocol:(BOOL)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)processDialogFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)processDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setShouldProcessAccount:(BOOL)arg1 ;
-(void)setShouldProcessDialogs:(BOOL)arg1 ;
-(void)setShouldProcessAuthenticationDialogs:(BOOL)arg1 ;
-(BOOL)shouldProcessAuthenticationDialogs;
-(BOOL)shouldProcessTouchIDDialogs;
-(BOOL)shouldProcessDialogs;
-(id)_metricsDictionaryForResponse:(id)arg1 ;
-(BOOL)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id*)arg3 ;
-(id)_touchIDDialogForResponse:(id)arg1 ;
-(void)_checkBiometricFailureForResponse:(id)arg1 ;
-(BOOL)_shouldAttemptPasswordPaymentSheetForError:(id)arg1 ;
-(void)_presentDialog:(id)arg1 ;
-(void)_performActionsForResponse:(id)arg1 ;
-(BOOL)_processFailureTypeFromDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldProcessDialogsOutsideDaemon;
-(BOOL)shouldTriggerDownloads;
-(void)_checkDownloadQueues;
-(void)_refreshSubscriptionStatus;
-(void)_selectFooterSection:(id)arg1 ;
-(BOOL)shouldProcessAccount;
-(void)_checkInAppPurchaseQueueForAction:(id)arg1 ;
-(BOOL)shouldPostFooterSectionChanged;
-(void)setShouldPostFooterSectionChanged:(BOOL)arg1 ;
-(void)setShouldTriggerDownloads:(BOOL)arg1 ;
-(void)setShouldProcessDialogsOutsideDaemon:(BOOL)arg1 ;
@end

