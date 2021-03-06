/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVMediaSocialPostDescription, NSString;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding> {

	SSVMediaSocialPostDescription* _postDescription;

}

@property (nonatomic,readonly) SSVMediaSocialPostDescription * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithPostDescription:(id)arg1 ;
-(SSVMediaSocialPostDescription *)postDescription;
@end

