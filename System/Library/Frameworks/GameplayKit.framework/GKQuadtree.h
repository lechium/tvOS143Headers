/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtree : NSObject {

	GKCQuadTree<NSObject>* _cQuadTree;

}
+(id)quadtreeWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)removeElement:(id)arg1 ;
-(id)initWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 ;
-(id)addElement:(id)arg1 withQuad:(GKQuadRef)arg2 ;
-(id)elementsAtPoint:;
-(id)elementsInQuad:(GKQuadRef)arg1 ;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
@end

