/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	BSMutableSettings* _otherSettingsObserverInfo;
	BOOL _iteratingObservers;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3 ;
-(void)removeAllObservers;
-(void)observeOtherSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_observeSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

