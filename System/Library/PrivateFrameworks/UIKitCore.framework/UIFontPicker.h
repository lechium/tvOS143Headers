/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIFontDescriptor;


@protocol UIFontPicker <NSObject>
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor; 
@property (assign,nonatomic,__weak) id<UIFontPickerDelegate> delegate; 
@required
-(id<UIFontPickerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setSelectedFontDescriptor:(id)arg1;
-(UIFontDescriptor *)selectedFontDescriptor;

@end
