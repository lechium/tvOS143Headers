/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TIAssistantSettings : NSObject
+(void)presentDialogForType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)dismissedDataSharingWithResponse:(long long)arg1 ;
+(void)launchKeyboardSettings;
+(void)launchDictationSettings;
+(void)setTestBlock:(/*^block*/id)arg1 ;
+(void)connectForOperations:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)promptToEnableDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptToRemindDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptReminderDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptToEnableDictationWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissDialog;
+(void)dismissEnableDictationPrompt;
+(void)dismissEnableDataSharingPrompt;
@end
