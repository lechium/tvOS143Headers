/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject {

	long long _version;
	NSURL* _messagesBundleURL;

}

@property (nonatomic,readonly) long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * messagesBundleURL;              //@synthesize messagesBundleURL=_messagesBundleURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(NSURL *)messagesBundleURL;
@end

