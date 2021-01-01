/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMBModelProperties
@required
-(BOOL)hmbPropertyWasSet:(id)arg1;
-(id)hmbPropertyNamed:(id)arg1;
-(void)hmbSetProperty:(id)arg1 named:(id)arg2;
-(void)hmbUnsetPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsReadOnly:(id)arg1;
-(id)hmbPropertyNamed:(id)arg1 isSet:(BOOL*)arg2;
-(id)hmbDefaultValueForPropertyNamed:(id)arg1;
-(BOOL)hmbPropertyIsAvailable:(id)arg1;

@end
