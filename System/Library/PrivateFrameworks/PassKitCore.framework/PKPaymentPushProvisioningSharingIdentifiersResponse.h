/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary;

@interface PKPaymentPushProvisioningSharingIdentifiersResponse : PKPaymentWebServiceResponse {

	NSDictionary* _sharingIdentifiersDictionary;

}

@property (nonatomic,readonly) NSDictionary * sharingIdentifiersDictionary;              //@synthesize sharingIdentifiersDictionary=_sharingIdentifiersDictionary - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)sharingIdentifiersDictionary;
@end

