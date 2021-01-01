/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSDate, TVPSecureKeyRequest;

@interface TVPSecureKeyResponse : NSObject {

	NSData* _keyData;
	NSDate* _renewalDate;
	TVPSecureKeyRequest* _request;

}

@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSDate * renewalDate;                       //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * request;              //@synthesize request=_request - In the implementation block
-(TVPSecureKeyRequest *)request;
-(void)setRequest:(TVPSecureKeyRequest *)arg1 ;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(NSDate *)renewalDate;
@end
