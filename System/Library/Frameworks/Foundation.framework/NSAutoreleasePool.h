/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface NSAutoreleasePool : NSObject {

	void* _token;
	void* _reserved3;
	void* _reserved2;
	void* _reserved;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)addObject:(id)arg1 ;
+(void)showPools;
+(void)releaseAllPools;
+(unsigned long long)autoreleasedObjectCount;
+(unsigned long long)topAutoreleasePoolCount;
+(BOOL)autoreleasePoolExists;
+(void)enableRelease:(BOOL)arg1 ;
+(void)enableFreedObjectCheck:(BOOL)arg1 ;
+(unsigned long long)poolCountHighWaterMark;
+(void)setPoolCountHighWaterMark:(unsigned long long)arg1 ;
+(unsigned long long)poolCountHighWaterResolution;
+(void)setPoolCountHighWaterResolution:(unsigned long long)arg1 ;
+(unsigned long long)totalAutoreleasedObjects;
+(void)resetTotalAutoreleasedObjects;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)init;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)drain;
@end

