/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OspreyConnectionPool;

@interface OspreyServiceConfiguration : NSObject {

	OspreyConnectionPool* _connectionPool;

}

@property (readonly) OspreyConnectionPool * connectionPool;              //@synthesize connectionPool=_connectionPool - In the implementation block
+(id)sharedConfiguration;
-(id)init;
-(OspreyConnectionPool *)connectionPool;
@end

