/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_petSceneNodesForGraph:(id)arg1 ;
-(void)_removeAllPetNodesForGraph:(id)arg1 ;
-(id)_petsForSceneNode:(id)arg1 inGraph:(id)arg2 ;
@end

