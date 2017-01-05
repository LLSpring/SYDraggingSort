//
//   YLDargSortCell.h
//   
//
//  Created by HelloYeah on 2016/11/30.
//  Copyright © 2016年 SunYi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SKDragSortDelegate <NSObject>

- (void)SYDargSortCellGestureAction:(UIGestureRecognizer *)gestureRecognizer;

- (void)SYDargSortCellCancelSubscribe:(NSString *)subscribe;

@end

@interface SYDargSortCell : UICollectionViewCell
@property (nonatomic,strong) NSString * subscribe;
@property (nonatomic,weak) id<SKDragSortDelegate> delegate;

- (void)showDeleteBtn;
@end
