/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSArray;

@interface SeymourUI.TVFilterResultActionsCell : UICollectionViewCell {

	 delegate;
	 titleLabel;
	 sortButton;
	 bottomFocusGuide;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(NSArray *)preferredFocusEnvironments;
-(void)clearButtonTapped;
-(void)sortButtonTapped;
@end

