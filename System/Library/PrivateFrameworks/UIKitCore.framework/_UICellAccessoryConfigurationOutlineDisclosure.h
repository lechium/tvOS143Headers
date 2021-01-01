/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class UIColor, UIImage;

@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration {

	BOOL _cellSelectionTogglesExpansionState;
	double _rotationAngle;
	UIColor* _selectedTintColor;
	UIImage* __customImage;

}

@property (nonatomic,readonly) UIImage * _customImage;                               //@synthesize _customImage=__customImage - In the implementation block
@property (nonatomic,readonly) BOOL cellSelectionTogglesExpansionState;              //@synthesize cellSelectionTogglesExpansionState=_cellSelectionTogglesExpansionState - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double rotationAngle;                                   //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,retain) UIColor * selectedTintColor;                            //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(long long)_systemType;
-(UIImage *)_customImage;
-(id)initWithCellSelectionTogglesExpansionState:(BOOL)arg1 ;
-(UIColor *)selectedTintColor;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
-(BOOL)cellSelectionTogglesExpansionState;
@end

