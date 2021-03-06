/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@class NSArray, NSMutableArray;

@interface CRLatticeRun : NSObject {

	NSArray* _graphEdges;
	NSMutableArray* _mutablePaths;
	CGRect _rect;

}

@property (nonatomic,retain) NSMutableArray * mutablePaths;              //@synthesize mutablePaths=_mutablePaths - In the implementation block
@property (nonatomic,readonly) NSArray * paths; 
@property (readonly) CGRect rect;                                        //@synthesize rect=_rect - In the implementation block
@property (nonatomic,readonly) NSArray * graphEdges;                     //@synthesize graphEdges=_graphEdges - In the implementation block
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)rect;
-(void)setGraph:(id)arg1 ;
-(NSArray *)paths;
-(void)appendPath:(id)arg1 ;
-(NSMutableArray *)mutablePaths;
-(void)setMutablePaths:(NSMutableArray *)arg1 ;
-(NSArray *)graphEdges;
@end

