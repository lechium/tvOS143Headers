//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@protocol TVSettingsWholeHomeAudioHomePickerViewControllerDelegate;

@interface TVSettingsWholeHomeAudioHomePickerViewController : TSKViewController
{
    id <TVSettingsWholeHomeAudioHomePickerViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100009bb8
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioHomePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectHomeItem:(id)arg1;	// IMP=0x0000000100009a58
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000098d8
- (id)loadSettingGroups;	// IMP=0x0000000100009638
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100009584
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000094c8
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100009408

@end

