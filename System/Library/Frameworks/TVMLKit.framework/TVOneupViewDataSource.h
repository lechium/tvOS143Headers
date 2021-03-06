/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVOneupViewDataSource <NSObject>
@optional
-(long long)oneupView:(id)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;
-(id)oneupView:(id)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;

@required
-(long long)numberOfItemsInOneupView:(id)arg1;
-(id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;

@end

