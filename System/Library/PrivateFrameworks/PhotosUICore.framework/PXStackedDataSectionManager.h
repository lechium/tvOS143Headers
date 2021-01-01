/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXDataSectionManagerEnabling.h>

@class NSString;

@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling> {

	BOOL _enabled;
	BOOL _alwaysContainsObjects;
	id _additionalStorage;

}

@property (assign,nonatomic) BOOL alwaysContainsObjects;                 //@synthesize alwaysContainsObjects=_alwaysContainsObjects - In the implementation block
@property (nonatomic,retain) id additionalStorage;                       //@synthesize additionalStorage=_additionalStorage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(BOOL)_updateDataSectionIfNecessary;
-(id)createDataSection;
-(BOOL)isDataSectionEmpty;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(BOOL)alwaysContainsObjects;
-(void)setAlwaysContainsObjects:(BOOL)arg1 ;
-(id)additionalStorage;
-(void)setAdditionalStorage:(id)arg1 ;
@end

