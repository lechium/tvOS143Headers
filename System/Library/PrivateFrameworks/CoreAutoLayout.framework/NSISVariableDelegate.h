/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSISVariableDelegate <NSObject>
@optional
-(int)nsis_orientationHintForVariable:(id)arg1;

@required
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
-(id)nsis_descriptionOfVariable:(id)arg1;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;

@end

