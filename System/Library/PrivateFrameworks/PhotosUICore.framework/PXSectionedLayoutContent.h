/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSArray;

@interface PXSectionedLayoutContent : NSObject {

	NSMutableArray* _sections;
	long long _axis;
	CGSize _internalContentSize;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) long long axis;                          //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) CGSize internalContentSize;              //@synthesize internalContentSize=_internalContentSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;               //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections; 
@property (nonatomic,readonly) CGSize contentSize; 
-(id)description;
-(id)init;
-(NSArray *)sections;
-(CGSize)contentSize;
-(void)addSection:(id)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)removeSection:(id)arg1 ;
-(void)_removeSection:(id)arg1 ;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithAxis:(long long)arg1 insets:(UIEdgeInsets)arg2 ;
-(void)removeAllSections;
-(void)removeSections:(id)arg1 ;
-(void)exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2 ;
-(void)updateSections:(id)arg1 ;
-(void)_addSection:(id)arg1 ;
-(void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2 ;
-(void)_adjustSectionsFromIndex:(long long)arg1 ;
-(CGSize)internalContentSize;
-(void)setInternalContentSize:(CGSize)arg1 ;
@end
