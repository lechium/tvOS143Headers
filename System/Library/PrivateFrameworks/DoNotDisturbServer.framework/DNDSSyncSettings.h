/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDSSyncSettings : NSObject <NSCopying> {

	BOOL _syncEnabled;

}

@property (getter=isSyncEnabled,nonatomic,readonly) BOOL syncEnabled;              //@synthesize syncEnabled=_syncEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isSyncEnabled;
-(id)initWithSyncEnabled:(BOOL)arg1 ;
@end

