/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFKeychain : NSObject {

	NSString* _service;
	NSString* _accessGroup;

}

@property (nonatomic,readonly) NSString * service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
-(NSString *)service;
-(id)items;
-(id)initWithService:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(NSString *)accessGroup;
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
@end
