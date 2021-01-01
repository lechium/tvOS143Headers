/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITreeDataSourceSnapshotter, NSOrderedSet;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {

	_UITreeDataSourceSnapshotter* _snapshotter;
	NSOrderedSet* _identifiers;

}

@property (nonatomic,readonly) _UITreeDataSourceSnapshotter * snapshotter;              //@synthesize snapshotter=_snapshotter - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * identifiers;                              //@synthesize identifiers=_identifiers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSOrderedSet *)identifiers;
-(_UITreeDataSourceSnapshotter *)snapshotter;
-(id)initWithSnapshotter:(id)arg1 identifiers:(id)arg2 ;
@end

