/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>
#import <libobjc.A.dylib/NSKeyValueProxyCaching.h>

@class NSObject, NSString, NSKeyValueNonmutatingOrderedSetMethodSet;

@interface NSKeyValueOrderedSet : NSOrderedSet <NSKeyValueProxyCaching> {

	NSObject* _container;
	NSString* _key;
	NSKeyValueNonmutatingOrderedSetMethodSet* _methods;

}
+(id)_proxyShare;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(SCD_Struct_NS37)_proxyLocator;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
@end
