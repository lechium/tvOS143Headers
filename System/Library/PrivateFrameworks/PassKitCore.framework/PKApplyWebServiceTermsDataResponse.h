/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSData, NSString;

@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse {

	NSData* _termsData;
	NSString* _termsDataFileName;

}

@property (nonatomic,retain) NSData * termsData;                      //@synthesize termsData=_termsData - In the implementation block
@property (nonatomic,copy) NSString * termsDataFileName;              //@synthesize termsDataFileName=_termsDataFileName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)termsData;
-(void)setTermsData:(NSData *)arg1 ;
-(NSString *)termsDataFileName;
-(void)setTermsDataFileName:(NSString *)arg1 ;
@end

