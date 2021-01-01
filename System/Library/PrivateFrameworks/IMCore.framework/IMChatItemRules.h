/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMChatItemRules <NSObject>
@required
-(id)_items;
-(id)_initWithChat:(id)arg1;
-(void)_setItems:(id)arg1;
-(id)_chatItems;
-(void)_setNextStaleTime:(id)arg1;
-(id)_nextStaleTime;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
-(void)_didProcessChatItems:(id)arg1;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 indexesOfItemsDeleted:(id*)arg3 indexToRangeMapOfItemsDeleted:(id*)arg4;

@end

