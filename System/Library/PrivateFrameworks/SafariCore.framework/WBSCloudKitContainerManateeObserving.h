/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol WBSCloudKitContainerManateeObserving <NSObject>
@property (nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (nonatomic,copy) id stateChangeObserver; 
@required
-(NSString *)containerIdentifier;
-(id)initWithContainerIdentifier:(id)arg1 appleAccountInformationProvider:(id)arg2;
-(void)determineManateeStateWithCompletion:(/*^block*/id)arg1;
-(id)stateChangeObserver;
-(void)setStateChangeObserver:(/*^block*/id)arg1;

@end

