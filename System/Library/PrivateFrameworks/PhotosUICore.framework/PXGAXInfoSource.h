/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSIndexSet;


@protocol PXGAXInfoSource <NSObject>
@property (nonatomic,readonly) NSIndexSet * axSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axVisibleSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axSelectedSpriteIndexes; 
@required
-(NSIndexSet *)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(CGRect)arg1;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2;
-(NSIndexSet *)axVisibleSpriteIndexes;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1;
-(NSIndexSet *)axSelectedSpriteIndexes;

@end

