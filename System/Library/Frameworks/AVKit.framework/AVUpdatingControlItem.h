/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVControlItem.h>

@interface AVUpdatingControlItem : AVControlItem {

	/*^block*/id _imageUpdatingBlock;
	/*^block*/id _enabledBlock;

}

@property (setter=_setImageUpdatingBlock:,getter=_imageUpdatingBlock,nonatomic,copy) id imageUpdatingBlock;              //@synthesize imageUpdatingBlock=_imageUpdatingBlock - In the implementation block
@property (setter=_setEnabledBlock:,getter=_isEnabledBlock,nonatomic,copy) id enabledBlock;                              //@synthesize enabledBlock=_enabledBlock - In the implementation block
-(BOOL)isEnabled;
-(id)_privateImage;
-(/*^block*/id)_imageUpdatingBlock;
-(void)_setImageUpdatingBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)_isEnabledBlock;
-(void)_setEnabledBlock:(/*^block*/id)arg1 ;
@end

