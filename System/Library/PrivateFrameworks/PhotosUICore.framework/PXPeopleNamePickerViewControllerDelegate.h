/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>
@optional
-(void)namePickerControllerDidStartEditing:(id)arg1;
-(void)namePickerControllerDidEndEditing:(id)arg1;
-(void)namePickerControllerWillChangeText:(id)arg1;

@required
-(void)namePickerController:(id)arg1 didPickPerson:(id)arg2;
-(void)namePickerController:(id)arg1 didPickContact:(id)arg2;
-(void)namePickerController:(id)arg1 didPickString:(id)arg2;

@end
