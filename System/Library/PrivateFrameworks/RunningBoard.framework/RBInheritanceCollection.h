/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NSSet;

@interface RBInheritanceCollection : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {

	NSDictionary* _inheritancesByEnvironment;
	NSSet* _inheritances;
	NSSet* _namespaces;

}
+(id)collectionWithInheritances:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allNamespaces;
-(id)inheritancesForEnvironment:(id)arg1 ;
-(id)_initWithInheritances:(id)arg1 ;
-(id)_initWithCollection:(id)arg1 ;
-(id)allEnvironments;
-(id)allInheritances;
@end
