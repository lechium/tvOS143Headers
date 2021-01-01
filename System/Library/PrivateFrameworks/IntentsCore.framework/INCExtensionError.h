/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface INCExtensionError : NSObject {

	long long _errorCode;
	NSError* _underlyingError;

}

@property (assign,nonatomic) long long errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(void)setUnderlyingError:(NSError *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSError *)underlyingError;
-(id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
@end

