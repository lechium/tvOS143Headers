/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentViewConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIContentViewLabelConfiguration, NSString;

@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {

	struct {
		unsigned hasCustomizedAxesPreservingSuperviewLayoutMargins : 1;
		unsigned hasCustomizedDirectionalLayoutMargins : 1;
	}  _configurationFlags;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	long long _defaultStyle;
	_UIContentViewLabelConfiguration* _textLabel;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (assign,setter=_setAxesPreservingSuperviewLayoutMargins:,nonatomic) unsigned long long _axesPreservingSuperviewLayoutMargins;              //@synthesize axesPreservingSuperviewLayoutMargins=_axesPreservingSuperviewLayoutMargins - In the implementation block
@property (assign,setter=_setDirectionalLayoutMargins:,nonatomic) NSDirectionalEdgeInsets _directionalLayoutMargins;                                 //@synthesize directionalLayoutMargins=_directionalLayoutMargins - In the implementation block
@property (assign,nonatomic) long long _defaultStyle;                                                                                                //@synthesize defaultStyle=_defaultStyle - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * textLabel;                                                                         //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) BOOL resetsVerticalLayoutMargins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultHeaderConfiguration;
+(id)defaultFooterConfiguration;
+(id)defaultGroupedFooterConfiguration;
+(id)defaultGroupedHeaderConfiguration;
+(id)defaultPlainHeaderConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)defaultPlainFooterConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)defaultGroupedHeaderConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)defaultGroupedFooterConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)_defaultConfigurationForStyle:(long long)arg1 state:(unsigned long long)arg2 traitCollection:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIContentViewLabelConfiguration *)textLabel;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)updatedConfigurationForState:(unsigned long long)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(void)set_defaultStyle:(long long)arg1 ;
-(long long)_defaultStyle;
-(id)_initWithTextLabel:(id)arg1 resetsVerticalLayoutMargins:(BOOL)arg2 traitCollection:(id)arg3 ;
-(id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(unsigned long long)_axesPreservingSuperviewLayoutMargins;
-(void)_setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)_directionalLayoutMargins;
-(void)_setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)_configureForResetsVerticalLayoutMargins:(BOOL)arg1 withTraitCollection:(id)arg2 ;
-(BOOL)_isEqualToConfiguration:(id)arg1 ;
-(BOOL)_isEqualToConfigurationQuick:(id)arg1 ;
-(id)createContentView;
-(void)applyToContentView:(id)arg1 ;
-(void)setResetsVerticalLayoutMargins:(BOOL)arg1 ;
-(BOOL)resetsVerticalLayoutMargins;
@end

