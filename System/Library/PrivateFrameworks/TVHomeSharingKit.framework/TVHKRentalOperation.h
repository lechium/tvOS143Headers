/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSError, TVHKRentalItem, TVHKMediaLibrarySessionState, TVHKMediaLibraryRequestSession;

@interface TVHKRentalOperation : TVHKAsynchronousOperation {

	BOOL _success;
	NSError* _error;
	TVHKRentalItem* _rentalItem;
	TVHKMediaLibrarySessionState* _sessionState;
	TVHKMediaLibraryRequestSession* _requestSession;

}

@property (assign,nonatomic) BOOL success;                                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) TVHKRentalItem * rentalItem;                                  //@synthesize rentalItem=_rentalItem - In the implementation block
@property (nonatomic,readonly) TVHKMediaLibrarySessionState * sessionState;                  //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) TVHKMediaLibraryRequestSession * requestSession;              //@synthesize requestSession=_requestSession - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(TVHKMediaLibrarySessionState *)sessionState;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(id)initWithMediaItem:(id)arg1 sessionState:(id)arg2 requestSession:(id)arg3 ;
-(TVHKRentalItem *)rentalItem;
@end

