//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TVHScreenSaverPickerDelegate;

@interface TVHScreenSaverPicker : NSObject
{
    id <TVHScreenSaverPickerDelegate> _delegate;	// 8 = 0x8
}

+ (id)_screenSaverStyleForMediaCategoryType:(unsigned long long)arg1;	// IMP=0x0000000100028844
- (void).cxx_destruct;	// IMP=0x00000001000288ac
@property(nonatomic) __weak id <TVHScreenSaverPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setScreenSaverWithMediaLibrary:(id)arg1 mediaCategoryType:(unsigned long long)arg2 mediaEntityCollection:(id)arg3;	// IMP=0x00000001000284c0

@end

