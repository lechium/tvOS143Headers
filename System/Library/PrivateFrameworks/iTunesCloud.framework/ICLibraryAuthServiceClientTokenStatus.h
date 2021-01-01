/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICLibraryAuthServiceClientTokenResult, NSError;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding> {

	BOOL _shouldExcludeFromBackgroundRefresh;
	ICLibraryAuthServiceClientTokenResult* _tokenResult;
	NSError* _lastError;
	double _lastUpdateAttemptTime;

}

@property (nonatomic,copy) ICLibraryAuthServiceClientTokenResult * tokenResult;              //@synthesize tokenResult=_tokenResult - In the implementation block
@property (nonatomic,copy) NSError * lastError;                                              //@synthesize lastError=_lastError - In the implementation block
@property (assign,nonatomic) double lastUpdateAttemptTime;                                   //@synthesize lastUpdateAttemptTime=_lastUpdateAttemptTime - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeFromBackgroundRefresh;                        //@synthesize shouldExcludeFromBackgroundRefresh=_shouldExcludeFromBackgroundRefresh - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)lastError;
-(void)setLastError:(NSError *)arg1 ;
-(double)lastUpdateAttemptTime;
-(void)setLastUpdateAttemptTime:(double)arg1 ;
-(BOOL)shouldExcludeFromBackgroundRefresh;
-(void)setShouldExcludeFromBackgroundRefresh:(BOOL)arg1 ;
-(ICLibraryAuthServiceClientTokenResult *)tokenResult;
-(void)setTokenResult:(ICLibraryAuthServiceClientTokenResult *)arg1 ;
@end
