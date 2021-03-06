//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

#import "TVSettingsWholeHomeAudioRoomDataSourceDelegate-Protocol.h"

@class NSString, TVSettingsWholeHomeAudioRoomDataSource;
@protocol TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate;

@interface TVSettingsWholeHomeAudioRoomPickerViewController : TSKViewController <TVSettingsWholeHomeAudioRoomDataSourceDelegate>
{
    id <TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    TVSettingsWholeHomeAudioRoomDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000136e8
@property(readonly, nonatomic) TVSettingsWholeHomeAudioRoomDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x00000001000133bc
- (void)_presentCreateRoomFailedViewControllerWithError:(id)arg1;	// IMP=0x0000000100013234
- (void)_showAccessoryRemoveFailed;	// IMP=0x0000000100012f5c
- (void)__removeLocalAccessoryFromHome;	// IMP=0x0000000100012d04
- (void)_removeLocalAccessoryFromHome;	// IMP=0x0000000100012c90
- (void)__moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x0000000100012a1c
- (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x00000001000127d8
- (void)__moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x00000001000125b4
- (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x0000000100012370
- (void)_didSelectSuggestedRoomItem:(id)arg1;	// IMP=0x00000001000121ac
- (void)_didSelectExistingRoomItem:(id)arg1;	// IMP=0x0000000100011fe0
- (id)_makeAddNewRoomViewController;	// IMP=0x0000000100011ea8
- (void)wholeHomeAudioRoomDataSourceDidUpdate:(id)arg1;	// IMP=0x0000000100011e9c
- (void)wholeHomeAudioRoomDataSourceHomeWasRemoved:(id)arg1;	// IMP=0x0000000100011e54
- (id)loadSettingGroups;	// IMP=0x00000001000111e0
- (id)initWithHome:(id)arg1;	// IMP=0x00000001000110bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

