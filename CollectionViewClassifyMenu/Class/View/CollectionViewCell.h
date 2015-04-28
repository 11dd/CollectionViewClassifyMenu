//
//  CollectionViewCell.h
//  CollectionViewClassifyMenu
//
//  Created by https://github.com/ChenYilong on 15/3/17.
//  Copyright (c) 2015年 chenyilong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CYLIndexPathButton.h"

@interface CollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) CYLIndexPathButton *button;
@property (nonatomic,assign ) int                section;
@property (nonatomic,assign ) int                row;
@property (nonatomic, assign) BOOL               shouldShow;
@end
