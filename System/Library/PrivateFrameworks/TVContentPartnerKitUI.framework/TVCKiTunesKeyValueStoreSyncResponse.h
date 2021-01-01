/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface TVCKiTunesKeyValueStoreSyncResponse : NSObject {

	BOOL _success;
	NSString* _domainVersion;
	NSArray* _peerPutItems;
	NSArray* _putOKKeys;
	NSArray* _rejectedKeys;

}

@property (nonatomic,readonly) BOOL success;                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSString * domainVersion;              //@synthesize domainVersion=_domainVersion - In the implementation block
@property (nonatomic,readonly) NSArray * peerPutItems;                //@synthesize peerPutItems=_peerPutItems - In the implementation block
@property (nonatomic,readonly) NSArray * putOKKeys;                   //@synthesize putOKKeys=_putOKKeys - In the implementation block
@property (nonatomic,readonly) NSArray * rejectedKeys;                //@synthesize rejectedKeys=_rejectedKeys - In the implementation block
-(BOOL)success;
-(NSString *)domainVersion;
-(id)_initWithSuccess:(BOOL)arg1 domainVersion:(id)arg2 peerPutItems:(id)arg3 putOKKeys:(id)arg4 rejectedKeys:(id)arg5 ;
-(NSArray *)peerPutItems;
-(NSArray *)putOKKeys;
-(NSArray *)rejectedKeys;
@end

